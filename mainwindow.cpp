#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Aplicaciones.h"

/* Variables globales */

static float Tam_paso = 0u;
static int Feedrate_size_slicer = 0u;
static uint8_t tiempo = 0u;
static QString valor_PWM;
using namespace cv;
static QString  nombre_archivo_global;
static bool Envio_bandera = false, Preparado = false;
static bool bandera_01mm= false, bandera_05mm=false,  bandera_100mm= false, bandera_1000mm= false;
static Mat imagen1;
static Mat imagen1_chica;
static VideoCapture camara("http://192.168.0.104:8080/video");
static QString paridad_envio;
static QRegExp mpx("WPos:([^,]*),([^,]*),([^,^>^|]*)");
void MainWindow::Recepcion_Cordenadas()
{

    if((Preparado == false) && (serialDeviceIsConnected == false))
    {
        tiempo += 1;
    }
    if((Preparado) or ((tiempo < 20) && (serialDeviceIsConnected == false)))
    {
       QString comando = "?";
       usbDevice->write((comando + "\r").toLatin1());
       qDebug() << comando << tiempo;
    }
    /*else {

        tiempo = 20;
        qDebug() << Preparado;
    }*/


}

void MainWindow::Despliegue_Cordenadas()
{
    CordenadasMaquina();
}

void MainWindow::Camara_IP(){
    String camara_seleccion;

    ui->Secundario->setTabText(0,"Camara");
    ui->Secundario->setTabText(1,"Movimiento");
    ui->Secundario->setTabText(2,"Gcode");

    /* Activacion de la camara */
    if(!ui->Activar_camara->isChecked())
    {
        ui->label_2->setText("Selecciona una camara");
    }
    //qDebug() << QString::fromStdString(camara_seleccion);
    if(ui->Activar_camara->isChecked())
    {
        camara >> imagen1;
        cv::resize(imagen1, imagen1_chica, Size(640,480),0,0, INTER_LINEAR);
        QImage imagenQT = Mat2QImage(imagen1_chica);
        QPixmap imagenMapa = QPixmap::fromImage(imagenQT);
        ui->label_2->clear();
        ui->label_2->setPixmap(imagenMapa);
    }

}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Inicio de la configuracion de la ventana

    //Crear una variable para la configuración del cronometro
    QTimer *cronometro = new QTimer(this);

    /* Creando un nuevo timer para la recepcion de las cordenadas */
    QTimer *timer200ms = new QTimer(this);

    QTimer *timer300ms = new QTimer(this);
    QTimer *envio = new QTimer(this);
    //Configuración del cronometro
    connect(cronometro, SIGNAL(timeout()), this, SLOT(Camara_IP()));

    /* Configurando el timer a 200ms */
    connect(timer200ms, SIGNAL(timeout()), this, SLOT(Recepcion_Cordenadas()));
    connect(timer300ms,SIGNAL(timeout()),this,SLOT(Despliegue_Cordenadas()));
    connect(envio,SIGNAL(timeout()),this,SLOT(Enviar_archivo()));
    //Iniciar cronometro
    cronometro->start(30);
    envio->start(400);
    /* Inicio del Timer a 200 ms */
    timer200ms->start(200);

    timer300ms->start(10);

    usbDevice = new QSerialPort(this);
    connect(usbDevice,SIGNAL(readyRead()),this,SLOT(onSerialDataAvailable()));

    baudrate = QSerialPort::Baud115200;

    serialDeviceIsConnected = false;
    getAvalilableSerialDevices();


    //Fin de la configuracion de la ventana

}

MainWindow::~MainWindow()
{
    //Se borra la ventana
    delete ui;
    //delete usbDevice;
}



void MainWindow::on_actionSalir_2_triggered(bool checked)
{
    if(checked == false) close();
}

void MainWindow::on_Conectar_clicked()
{
    if(serialDeviceIsConnected == false)
    {
        usbDevice->setPortName(serialComPortList[ui->Puerto->currentIndex()].portName());
        deviceDescription = serialComPortList[ui->Puerto->currentIndex()].description();
        //qDebug() << "connecting to: "<<usbDevice->portName();
        if(usbDevice->open(QIODevice::ReadWrite))
        {
            //Now the serial port is open try to set configuration
            if(!usbDevice->setBaudRate(baudrate))        //Depends on your boud-rate on the Device
                //qDebug()<<usbDevice->errorString();

            if(!usbDevice->setDataBits(QSerialPort::Data8))
                //qDebug()<<usbDevice->errorString();

            if(!usbDevice->setParity(QSerialPort::NoParity))
                //qDebug()<<usbDevice->errorString();

            if(!usbDevice->setStopBits(QSerialPort::OneStop))
                //qDebug()<<usbDevice->errorString();

            if(!usbDevice->setFlowControl(QSerialPort::NoFlowControl))
                //qDebug()<<usbDevice->errorString();

            //If any error was returned the serial il corrctly configured

            //qDebug() << "Connection to: "<< usbDevice->portName() << " " << deviceDescription << " connected";
            serialDeviceIsConnected = true;
        }
        else
        {
            //qDebug() << "Connection to: "<< usbDevice->portName() << " " << deviceDescription << " not connected";
            //qDebug() <<"         Error: "<<usbDevice->errorString();
            serialDeviceIsConnected = false;
        }
    }
    else
    {
        //qDebug() << "Can't connect, another device is connected";
    }
}

void MainWindow::on_Cerrar_clicked()
{
    if(serialDeviceIsConnected)
    {
        usbDevice->close();
        serialDeviceIsConnected = false;
        //qDebug() << "Connection to: "<< usbDevice->portName() << " " << deviceDescription << " closed";
    }
    else
    {
       //qDebug() << "Can't disconnect, no device is connected";
    }
}


void MainWindow::getAvalilableSerialDevices()
{
    //qDebug() << "Number of available ports: " << QSerialPortInfo::availablePorts().length();
    serialComPortList.clear();
    ui->Puerto->clear();
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts())
    {
        QString dbgStr = "Vendor ID: ";


       if(serialPortInfo.hasVendorIdentifier())
       {
          dbgStr+= serialPortInfo.vendorIdentifier();
       }
       else
       {
          dbgStr+= " - ";
       }
       dbgStr+= "  Product ID: ";
       if(serialPortInfo.hasProductIdentifier())
       {
          dbgStr+= serialPortInfo.hasProductIdentifier();
       }
       else
       {
          dbgStr+= " - ";
       }
       dbgStr+= " Name: " + serialPortInfo.portName();
       dbgStr+= " Description: "+serialPortInfo.description();
      //qDebug()<<dbgStr;
      serialComPortList.push_back(serialPortInfo);
      ui->Puerto->addItem(serialPortInfo.portName() +" "+serialPortInfo.description());
    }
}

void MainWindow::serialWrite(QString message)
{
    if(serialDeviceIsConnected == true)
    {
        usbDevice->write(message.toUtf8());
    }
}
void MainWindow::serialRead()
{
    if(serialDeviceIsConnected == true)
    {
        serialBuffer += usbDevice->readAll();
        QByteArray info = usbDevice->readAll();
        //qDebug() << info.begin();
    }
}

void MainWindow::onSerialDataAvailable()
{
    if(serialDeviceIsConnected == true)
    {

        serialRead();

        ui->Terminal->setText(serialBuffer + "\n");

        //qDebug() << serialBuffer + "\n";
        //if(serialBuffer.indexOf("k") == 1)
        //{
        //qDebug() << "Enviado";
        //}
    }
}


void MainWindow::CordenadasMaquina()
{
    serialRead();
    QString data = usbDevice->readLine().trimmed();
    QString estado = data.mid(1,4);
    Coordenadas X;
    Coordenadas Y;
    Coordenadas Z;
    //static QRegExp mpx("WPos:([^,]*),([^,]*),([^,^>^|]*)");
    if(estado.toUtf8() == "k")
    {
        qDebug() << "Correcto";
        paridad_envio = "Correcto";
    }
    if (mpx.indexIn(data) != -1)
    {
        ui->MPosX->display(mpx.cap(1));

        ui->MPosY->display(mpx.cap(2));

        ui->MPosZ->display(mpx.cap(3));

        if(estado == "Idle") ui->textBrowser->setText("En espera");
        if(estado == "Jog|") ui->textBrowser->setText("En movimiento");
        if(estado == "Run|") ui->textBrowser->setText("En ejecución");
        if(estado == "Hold") ui->textBrowser->setText("En pausa");
        if((Preparado) && (serialDeviceIsConnected == false))
        {
            X.Coordenada_tiempo_act = mpx.cap(1);
            Z.Coordenada_tiempo_act = mpx.cap(3);
            Y.Coordenada_tiempo_act = mpx.cap(2);
            qDebug() << X.Coordenada_tiempo_act;
        }

    }
    else {
        if((X.Coordenada_est == X.Coordenada_tiempo_act) || (Y.Coordenada_est == Y.Coordenada_tiempo_act) || (Z.Coordenada_est == Z.Coordenada_tiempo_act))
        {

            Preparado = false;
            //tiempo = 20;
        }
        else paridad_envio = "Noenvio";
    }
}


void MainWindow::on_Enviar_clicked()
{
    QString comando = ui->Insertar_comando->text();
    usbDevice->write((comando + "\r").toLatin1());
    ui->Terminal->setText(comando);
}

void MainWindow::on_Y_positivo_clicked()
{
    Coordenadas Y;
    QString comando = "$J=G91Y";
    QString size = QString::number(Tam_paso);
    QString feedrate_number = QString::number(Feedrate_size_slicer);
    Y.Coordenada_est = mpx.cap(2) + size;
    qDebug() << Y.Coordenada_est;
    if(Tam_paso <= 0)
    {
        QMessageBox::warning(this,"Pasos","Seleccione un valor mayor a 0");
    }
    if(Feedrate_size_slicer <= 0)
    {
        QMessageBox::warning(this,"Feedrate","Seleccione un valor mayor a 0");
    }
    else
    {
        usbDevice->write((comando + size + "F" + feedrate_number + "\r").toLatin1());
        ui->Terminal->setText(comando + size + "F" + feedrate_number + "\r");
    }
    Preparado = true;
}

void MainWindow::on_Y_negativo_clicked()
{
    Coordenadas Y;
    QString feedrate = "F";
    QString comando = "$J=G91Y-";
    QString size = QString::number(Tam_paso);
    QString feedrate_number = QString::number(Feedrate_size_slicer);
    Y.Coordenada_est = mpx.cap(2) + size;
    if(Tam_paso <= 0)
    {
        QMessageBox::warning(this,"Pasos","Seleccione un valor mayor a 0");
    }
    if(Feedrate_size_slicer <= 0)
    {
        QMessageBox::warning(this,"Feedrate","Seleccione un valor mayor a 0");
    }
    else
    {
        usbDevice->write((comando + size + "F" + feedrate_number + "\r").toLatin1());
        ui->Terminal->setText(comando + size + "F" + feedrate_number + "\r");
    }
    Preparado = true;
}


void MainWindow::on_X_positivo_clicked()
{
    Coordenadas X;
    QString comando = "$J=G91X";
    QString size = QString::number(Tam_paso);
    QString feedrate_number = QString::number(Feedrate_size_slicer);
    X.Coordenada_est = mpx.cap(2) + size;
    qDebug() << X.Coordenada_est;
    if(Tam_paso <= 0)
    {
        QMessageBox::warning(this,"Pasos","Seleccione un valor mayor a 0");
    }
    if(Feedrate_size_slicer <= 0)
    {
        QMessageBox::warning(this,"Feedrate","Seleccione un valor mayor a 0");
    }
    else
    {
        usbDevice->write((comando + size + "F" + feedrate_number + "\r").toLatin1());
         ui->Terminal->setText(comando + size + "F" + feedrate_number + "\r");
    }
    Preparado = true;
}

void MainWindow::on_X_negativo_clicked()
{
    Coordenadas X;
    QString comando = "$J=G91X-";
    QString size = QString::number(Tam_paso);
    QString feedrate_number = QString::number(Feedrate_size_slicer);
    X.Coordenada_est = mpx.cap(2) + size;
    qDebug() << X.Coordenada_est;
    if(Tam_paso <= 0)
    {
        QMessageBox::warning(this,"Pasos","Seleccione un valor mayor a 0");
    }
    if(Feedrate_size_slicer <= 0)
    {
        QMessageBox::warning(this,"Feedrate","Seleccione un valor mayor a 0");
    }
    else
    {
        usbDevice->write((comando + size + "F" + feedrate_number + "\r").toLatin1());
         ui->Terminal->setText(comando + size + "F" + feedrate_number + "\r");
    }
    Preparado = true;
}

void MainWindow::on_Z_positivo_clicked()
{
    Coordenadas Z;
    QString comando = "$J=G91Z";
    QString size = QString::number(Tam_paso);
    QString feedrate_number = QString::number(Feedrate_size_slicer);
    Z.Coordenada_est = mpx.cap(2) + size;
    if(Tam_paso <= 0)
    {
        QMessageBox::warning(this,"Pasos","Seleccione un valor mayor a 0");
    }
    if(Feedrate_size_slicer <= 0)
    {
        QMessageBox::warning(this,"Feedrate","Seleccione un valor mayor a 0");
    }
    else
    {
        usbDevice->write((comando + size + "F" + feedrate_number + "\r").toLatin1());
         ui->Terminal->setText(comando + size + "F" + feedrate_number + "\r");
    }
    Preparado = true;
}

void MainWindow::on_Z_negativo_clicked()
{
    QString comando = "$J=G91Z-";
    QString size = QString::number(Tam_paso);
    QString feedrate_number = QString::number(Feedrate_size_slicer);
    if(Tam_paso <= 0)
    {
        QMessageBox::warning(this,"Pasos","Seleccione un valor mayor a 0");
    }
    if(Feedrate_size_slicer <= 0)
    {
        QMessageBox::warning(this,"Feedrate","Seleccione un valor mayor a 0");
    }
    else
    {
        usbDevice->write((comando + size + "F" + feedrate_number + "\r").toLatin1());
         ui->Terminal->setText(comando + size + "F" + feedrate_number + "\r");
    }
    Preparado = true;
}

void MainWindow::on_dial_valueChanged(int value)
{
    Feedrate_size_slicer = value;
    ui->lcdNumber_2->display(value);
}


void MainWindow::on_dial_2_valueChanged(int value)
{
    //ui->Progreso_Gcode->setValue(value);
    if(bandera_01mm)
    {
        Tam_paso = value*0.001;
        //Tam_paso_float = Tam_paso*0.001;
         ui->Contador_pasos->display(Tam_paso);
    }
    if(bandera_05mm)
    {
        Tam_paso = value*0.01;
        ui->Contador_pasos->display(Tam_paso);
    }
    if(bandera_100mm)
    {
        Tam_paso = value;
        ui->Contador_pasos->display(Tam_paso);
    }
    if(bandera_1000mm)
    {
        Tam_paso = value;
        ui->Contador_pasos->display(Tam_paso);
    }

}

void MainWindow::on_pushButton_5_clicked()
{

    Encender_cabezal(true);
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    valor_PWM = QString::number(value);
    ui->Valor_potencia_laser->display(valor_PWM);
}


bool MainWindow::Encender_cabezal(bool Enable_control)
{
    bool Enable;
    if(Enable_control == true)
    {
        if(valor_PWM <= 0)
        {
            QMessageBox::warning(this,"Error","Selecione un valor mayor a 0");
        }
        else
        {
            QString Encendido = "G0S";
            QString comando = "M3";
            usbDevice->write((Encendido + valor_PWM  + comando + "\n").toLatin1());
             ui->Terminal->setText(Encendido + valor_PWM + comando + "\r");
            Enable = true;
        }
    }
    if(Enable_control == false)
    {
        QString apagado = "M5";
        usbDevice->write((apagado + "\n").toLatin1());
        ui->Terminal->setText(apagado);
        Enable = false;
    }
    return Enable;
    //qDebug() << Enable_control;
}

void MainWindow::on_pushButton_7_clicked()
{
    Encender_cabezal(false);
}

void MainWindow::on_Cero_clicked()
{
    QString comando1 = "G91Z5";
    QString comando2 = "G90X0Y0";
    QString comando3 = "G91Z-5";
    usbDevice->write((comando1 + "\r\n").toLatin1());
    ui->Terminal->setText(comando1 + "\r\n");
    usbDevice->write((comando2 + "\r\n").toLatin1());
    ui->Terminal->setText(comando2 + "\r\n");
    usbDevice->write((comando3 + "\r\n").toLatin1());
    ui->Terminal->setText(comando3 + "\r\n");
}


void MainWindow::on_Hold_clicked()
{
    QString comando = "!";
    usbDevice->write((comando + "\r").toLatin1());
    ui->Terminal->setText(comando + "\r\n");
}

void MainWindow::on_pushButton_6_clicked()
{
    QString comando = "!";
    usbDevice->write((comando + "\r").toLatin1());
    ui->Terminal->setText(comando + "\r\n");
}


void MainWindow::on_pushButton_clicked()
{
    QString filtro_datos = "Todos los archivos (*.*) ;; Archivo de texto (*.txt) ;; Archivos .NC (*.nc) ;; Archivos Gcode (*.gcode)";
    QString nombre_archivo = QFileDialog::getOpenFileName(this,"Elige el archivo","~/",filtro_datos);
    nombre_archivo_global = nombre_archivo;
    QFile archivo(nombre_archivo);

    if  (!archivo.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"Error","Archivo no abierto");
    }
    QTextStream in(&archivo);
    QString texto = in.readAll();
    ui->plainTextEdit->setPlainText(texto);
    archivo.close();
}


void MainWindow::on_Guardar_clicked()
{
    QFile archivo(nombre_archivo_global);
    if  (!archivo.open(QFile::WriteOnly | QFile::Text))
    {

    }
    QTextStream out(&archivo);
    QString texto = ui->plainTextEdit->toPlainText();
    QMessageBox Mensaje;
    Mensaje.setText("Ha realizado cambios en el archivo");
    Mensaje.setInformativeText("¿Usted quiere guardarlo?");
    Mensaje.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    Mensaje.setDefaultButton(QMessageBox::Save);
    int eleccion = Mensaje.exec();
    switch (eleccion) {
      case QMessageBox::Save:
        {
        QMessageBox Guardado;
        Guardado.setText("¡Guadado con exito!");
        Guardado.setStandardButtons(QMessageBox::Ok);
        Guardado.setDefaultButton(QMessageBox::Ok);
        Guardado.exec();
        out << texto;
        archivo.flush();
        archivo.close();
        }
          break;
      case QMessageBox::Discard:
        {
          QMessageBox No_guardado;
          No_guardado.setText("Cambios no guardados");
          No_guardado.setStandardButtons(QMessageBox::Ok);
          No_guardado.setDefaultButton(QMessageBox::Ok);
          No_guardado.exec();

        }
          break;
      case QMessageBox::Cancel:
        {
            QMessageBox Cancelar;
            Cancelar.setText("No guardado");
            Cancelar.setStandardButtons(QMessageBox::Ok);
            Cancelar.setDefaultButton(QMessageBox::Ok);
            Cancelar.exec();
        }
          break;
      default:
          // should never be reached
          break;
    }



}

void MainWindow::on_actionAcerca_triggered()
{
    QMessageBox::about(this,"Acerca de","Creado por Díaz López Adrián Darío");
}

void MainWindow::on_actionSalir_triggered()
{
    QMessageBox Mensaje;
    Mensaje.setText("¿Seguro que quieres salir?");
    Mensaje.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    Mensaje.setDefaultButton(QMessageBox::Yes);
    int eleccion = Mensaje.exec();
    switch (eleccion) {
      case QMessageBox::Yes:
        {
        close();
        }
          break;
      case QMessageBox::Cancel:
        {
        }
      default:
          // should never be reached
          break;
    }
}

void MainWindow::on_Capturar_imagen_clicked()
{
    QMessageBox Mensaje;
    Mensaje.setText("¿Quiere guardar la foto?");
    Mensaje.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    Mensaje.setDefaultButton(QMessageBox::Yes);
    int eleccion = Mensaje.exec();
    switch (eleccion) {
      case QMessageBox::Yes:
        {
            QString filtro_datos = "Todos los archivos (*.*) ;; Imagen PNG (*.png) ;; Imagen JPEG (*.jpeg)";
            QString nombre_archivo = QFileDialog::getSaveFileName(this,"Guardar el archivo","~/",filtro_datos);
            String nombre_del_archivo = nombre_archivo.toUtf8().constData();
            cv::imwrite(nombre_del_archivo,imagen1);
        }
          break;
      case QMessageBox::Cancel:
        {
        }
      default:{}
          // should never be reached
          break;
    }
}

void MainWindow::on_Enviar_2_clicked()
{

   Envio_bandera = true;

}

void MainWindow::Enviar_archivo()
{
    if(Envio_bandera == true)
    {
        QFile archivo(nombre_archivo_global);

        if(!archivo.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox::warning(this,"Error","El archivo no a sido abiero");
            return;
        }
        QTextStream in(&archivo);
        QString line = in.readLine();
        if(paridad_envio == "Correcto")
        {
            usbDevice->write((line + "\r\n").toLatin1());
            ui->Terminal->setText(line);
            if(in.atEnd())
               {
                  ui->Terminal->setText("Enviado con exito");
                  Envio_bandera = false;
                  archivo.close();
               }
        }
    //QString comando = ui->Insertar_comando->text();
    }
}

void MainWindow::on_Cero_Y_clicked()
{
    QString comando = "G92Y0";
    usbDevice->write((comando + "\r\n").toLatin1());
    ui->Terminal->setText(comando + "\r\n");
}

void MainWindow::on_Cero_XY_clicked()
{
    QString comando = "G92Y0X0";
    usbDevice->write((comando + "\r\n").toLatin1());
    ui->Terminal->setText(comando + "\r\n");
}

void MainWindow::on_Cero_Z_clicked()
{
    QString comando = "G92Z0";
    usbDevice->write((comando + "\r\n").toLatin1());
    ui->Terminal->setText(comando + "\r\n");
}

void MainWindow::on_Home_X_clicked()
{
    QString comando = "$HX";
    usbDevice->write((comando + "\r").toLatin1());
    ui->Terminal->setText(comando + "\r\n");
}

void MainWindow::on_Home_Y_clicked()
{
    QString comando = "$HY";
    usbDevice->write((comando + "\r").toLatin1());
    ui->Terminal->setText(comando + "\r\n");
}

void MainWindow::on_Continuar_clicked()
{
    QString comando = "~";
    usbDevice->write((comando + "\r").toLatin1());
    ui->Terminal->setText(comando + "\r\n");
}

void MainWindow::on_Reset_clicked()
{
    QString comando = "$X";
    usbDevice->write((comando + "\r").toLatin1());
    ui->Terminal->setText(comando + "\r\n");
}

void MainWindow::on_Cero_X_clicked()
{
    QString comando = "G92X0";
    usbDevice->write((comando + "\r\n").toLatin1());
    ui->Terminal->setText(comando + "\r\n");
}

void MainWindow::on_pushButton_3_clicked()
{

}

void MainWindow::on_radioButton_toggled(bool checked)
{
    if(checked)
    {
        bandera_05mm=true;
        ui->dial_2->setMaximum(50);
        ui->dial_2->setMinimum(10);
        bandera_01mm=false;
        bandera_100mm=false;
        bandera_1000mm=false;
    }
}

void MainWindow::on_radioButton_2_toggled(bool checked)
{
    //Manejar la distancia en pasos de 0.1mm
    if(checked)
    {
        bandera_01mm= true;
        ui->dial_2->setMaximum(10);
        ui->dial_2->setMinimum(1);
        bandera_05mm=false;
        bandera_100mm=false;
        bandera_1000mm=false;
    }
}

void MainWindow::on_radioButton_3_clicked(bool checked)
{
    if(checked)
    {
        bandera_100mm= true;
        ui->dial_2->setMaximum(100);
        ui->dial_2->setMinimum(1);
        bandera_05mm=false;
        bandera_01mm=false;
        bandera_1000mm=false;
    }

}

void MainWindow::on_radioButton_4_toggled(bool checked)
{
    if(checked)
    {
        bandera_1000mm= true;
        ui->dial_2->setMaximum(1000);
        ui->dial_2->setMinimum(100);
        bandera_05mm=false;
        bandera_01mm=false;
        bandera_100mm=false;
    }
}

