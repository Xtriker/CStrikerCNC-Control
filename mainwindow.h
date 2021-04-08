#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mat2qimage.h"
#include <QtSerialPort>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void Camara_IP();
    void Recepcion_Cordenadas();
    void serialRead();
    void serialWrite(QString message);
    bool Encender_cabezal(bool Enable_control);
private slots:
    void on_actionSalir_2_triggered(bool checked);
    void onSerialDataAvailable();
    void on_Conectar_clicked();
    void on_Cerrar_clicked();
    void on_Enviar_clicked();
    void on_Y_positivo_clicked();
    void on_Y_negativo_clicked();
    void on_X_positivo_clicked();
    void on_X_negativo_clicked();
    void on_Z_positivo_clicked();
    void on_Z_negativo_clicked();
    void CordenadasMaquina();
    void on_dial_valueChanged(int value);
    void on_dial_2_valueChanged(int value);
    void on_pushButton_5_clicked();
    void on_horizontalSlider_valueChanged(int value);
    void on_pushButton_7_clicked();
    void on_Cero_clicked();
    void on_Hold_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_clicked();
    void on_Guardar_clicked();
    void on_actionAcerca_triggered();
    void on_actionSalir_triggered();
    void on_Capturar_imagen_clicked();
    void on_Enviar_2_clicked();
    void Enviar_archivo();
    void Despliegue_Cordenadas();
    void on_Cero_Y_clicked();
    void on_Cero_XY_clicked();
    void on_Cero_Z_clicked();
    void on_Home_X_clicked();
    void on_Home_Y_clicked();
    void on_Continuar_clicked();
    void on_Reset_clicked();
    void on_Cero_X_clicked();

    void on_radioButton_toggled(bool checked);
    void on_radioButton_2_toggled(bool checked);
    void on_radioButton_3_clicked(bool checked);
    void on_radioButton_4_toggled(bool checked);
    void on_Centro_clicked();

    void on_Probing_clicked();

private:
    void getAvalilableSerialDevices();
    bool Encender_laser = false;
    Ui::MainWindow *ui;
    qint32 baudrate;
    QSerialPort *usbDevice;
    std::vector<QSerialPortInfo> serialComPortList;
    QString deviceDescription;
    QString serialBuffer;
    bool serialDeviceIsConnected;
};

#endif
