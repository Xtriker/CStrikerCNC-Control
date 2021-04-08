/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAcerca;
    QAction *actionSalir;
    QWidget *centralwidget;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *Secundario;
    QWidget *Camara;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *Activar_camara;
    QPushButton *Capturar_imagen;
    QWidget *Maquina;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *Controlesdial;
    QRadioButton *radioButton;
    QVBoxLayout *Grupo_Feedrate;
    QDial *dial;
    QLCDNumber *lcdNumber_2;
    QVBoxLayout *Grupo_Feedrate_2;
    QDial *dial_2;
    QLCDNumber *Contador_pasos;
    QLabel *label_Feedrate;
    QLabel *label_Pasos;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QFormLayout *Grupo_conexion_serial;
    QComboBox *Puerto;
    QPushButton *Conectar;
    QPushButton *Cerrar;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_9;
    QGridLayout *gridLayout_6;
    QPushButton *Cero_Y;
    QPushButton *Cero_XY;
    QPushButton *Cero_Z;
    QPushButton *Cero_X;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_10;
    QGridLayout *gridLayout_2;
    QPushButton *Home_Y;
    QPushButton *Continuar;
    QPushButton *Home_X;
    QPushButton *Hold;
    QPushButton *Reset;
    QPushButton *Cero;
    QVBoxLayout *verticalLayout;
    QLineEdit *Terminal;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *Insertar_comando;
    QPushButton *Enviar;
    QWidget *Lectura;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Probing;
    QPushButton *Centro;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout_7;
    QProgressBar *Progreso_Gcode;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *Enviar_2;
    QPushButton *Guardar;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QSlider *horizontalSlider;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QPushButton *Z_positivo;
    QPushButton *Y_positivo;
    QPushButton *X_negativo;
    QPushButton *Z_negativo;
    QPushButton *X_positivo;
    QPushButton *Y_negativo;
    QFrame *Coordenadas;
    QGridLayout *gridLayout_3;
    QLabel *Coordena_de_la_maquina;
    QLabel *Label_estado;
    QLabel *Label_X;
    QLCDNumber *MPosY;
    QLabel *Label_Z;
    QTextBrowser *Estado_textBrowser;
    QLCDNumber *MPosZ;
    QLabel *Label_Y;
    QLCDNumber *MPosX;
    QSpacerItem *horizontalSpacer_2;
    QLCDNumber *Valor_potencia_laser;
    QSpacerItem *horizontalSpacer_5;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuAyuda;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1140, 645);
        actionAcerca = new QAction(MainWindow);
        actionAcerca->setObjectName(QStringLiteral("actionAcerca"));
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_5 = new QGridLayout(centralwidget);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Secundario = new QTabWidget(centralwidget);
        Secundario->setObjectName(QStringLiteral("Secundario"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Secundario->sizePolicy().hasHeightForWidth());
        Secundario->setSizePolicy(sizePolicy);
        Secundario->setMinimumSize(QSize(750, 500));
        Secundario->setMaximumSize(QSize(999999, 999999));
        QFont font;
        font.setFamily(QStringLiteral("Iosevka"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        Secundario->setFont(font);
        Secundario->setCursor(QCursor(Qt::ArrowCursor));
        Camara = new QWidget();
        Camara->setObjectName(QStringLiteral("Camara"));
        horizontalLayout_5 = new QHBoxLayout(Camara);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(Camara);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(320, 240));
        label_2->setMaximumSize(QSize(640, 480));
        label_2->setFrameShape(QFrame::Box);

        horizontalLayout_5->addWidget(label_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        Activar_camara = new QCheckBox(Camara);
        Activar_camara->setObjectName(QStringLiteral("Activar_camara"));
        QFont font1;
        font1.setFamily(QStringLiteral("Iosevka"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        Activar_camara->setFont(font1);

        verticalLayout_6->addWidget(Activar_camara);

        Capturar_imagen = new QPushButton(Camara);
        Capturar_imagen->setObjectName(QStringLiteral("Capturar_imagen"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../../../../usr/share/icons/Papirus-Dark/24x24/devices/camera-photo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Capturar_imagen->setIcon(icon);

        verticalLayout_6->addWidget(Capturar_imagen);


        horizontalLayout_5->addLayout(verticalLayout_6);

        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../../../../usr/share/icons/Numix-Light/scalable/actions/view-list-images-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Secundario->addTab(Camara, icon1, QString());
        Maquina = new QWidget();
        Maquina->setObjectName(QStringLiteral("Maquina"));
        verticalLayout_8 = new QVBoxLayout(Maquina);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        Controlesdial = new QGridLayout();
        Controlesdial->setObjectName(QStringLiteral("Controlesdial"));
        radioButton = new QRadioButton(Maquina);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        QFont font2;
        font2.setFamily(QStringLiteral("Iosevka"));
        radioButton->setFont(font2);

        Controlesdial->addWidget(radioButton, 2, 2, 1, 1);

        Grupo_Feedrate = new QVBoxLayout();
        Grupo_Feedrate->setObjectName(QStringLiteral("Grupo_Feedrate"));
        dial = new QDial(Maquina);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setMaximumSize(QSize(200, 200));
        dial->setMaximum(2200);
        dial->setValue(0);
        dial->setInvertedAppearance(false);

        Grupo_Feedrate->addWidget(dial);

        lcdNumber_2 = new QLCDNumber(Maquina);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setMaximumSize(QSize(150, 120));

        Grupo_Feedrate->addWidget(lcdNumber_2);


        Controlesdial->addLayout(Grupo_Feedrate, 0, 0, 1, 1);

        Grupo_Feedrate_2 = new QVBoxLayout();
        Grupo_Feedrate_2->setObjectName(QStringLiteral("Grupo_Feedrate_2"));
        dial_2 = new QDial(Maquina);
        dial_2->setObjectName(QStringLiteral("dial_2"));
        dial_2->setMaximumSize(QSize(200, 200));
        dial_2->setMaximum(100);
        dial_2->setValue(0);

        Grupo_Feedrate_2->addWidget(dial_2);

        Contador_pasos = new QLCDNumber(Maquina);
        Contador_pasos->setObjectName(QStringLiteral("Contador_pasos"));
        Contador_pasos->setMaximumSize(QSize(150, 120));

        Grupo_Feedrate_2->addWidget(Contador_pasos);


        Controlesdial->addLayout(Grupo_Feedrate_2, 5, 0, 1, 1);

        label_Feedrate = new QLabel(Maquina);
        label_Feedrate->setObjectName(QStringLiteral("label_Feedrate"));
        label_Feedrate->setMaximumSize(QSize(100, 30));
        QFont font3;
        font3.setFamily(QStringLiteral("Iosevka"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_Feedrate->setFont(font3);

        Controlesdial->addWidget(label_Feedrate, 0, 2, 1, 1);

        label_Pasos = new QLabel(Maquina);
        label_Pasos->setObjectName(QStringLiteral("label_Pasos"));
        label_Pasos->setMaximumSize(QSize(70, 30));
        label_Pasos->setFont(font3);

        Controlesdial->addWidget(label_Pasos, 5, 2, 1, 1);

        radioButton_2 = new QRadioButton(Maquina);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setFont(font2);

        Controlesdial->addWidget(radioButton_2, 2, 0, 1, 1);

        radioButton_3 = new QRadioButton(Maquina);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setFont(font2);
        radioButton_3->setCheckable(true);
        radioButton_3->setChecked(true);

        Controlesdial->addWidget(radioButton_3, 3, 0, 1, 1);

        radioButton_4 = new QRadioButton(Maquina);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setFont(font2);

        Controlesdial->addWidget(radioButton_4, 3, 2, 1, 1);


        horizontalLayout_6->addLayout(Controlesdial);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_6->addItem(verticalSpacer_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(Maquina);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 30));
        QFont font4;
        font4.setFamily(QStringLiteral("Iosevka"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        label_6->setFont(font4);

        verticalLayout_5->addWidget(label_6);

        Grupo_conexion_serial = new QFormLayout();
        Grupo_conexion_serial->setObjectName(QStringLiteral("Grupo_conexion_serial"));
        Puerto = new QComboBox(Maquina);
        Puerto->setObjectName(QStringLiteral("Puerto"));

        Grupo_conexion_serial->setWidget(0, QFormLayout::SpanningRole, Puerto);

        Conectar = new QPushButton(Maquina);
        Conectar->setObjectName(QStringLiteral("Conectar"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../../../../usr/share/icons/Numix-Light/scalable/actions/media-view-subtitles-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Conectar->setIcon(icon2);

        Grupo_conexion_serial->setWidget(1, QFormLayout::LabelRole, Conectar);

        Cerrar = new QPushButton(Maquina);
        Cerrar->setObjectName(QStringLiteral("Cerrar"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../../../../../usr/share/icons/Numix-Light/scalable/actions/window-close-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Cerrar->setIcon(icon3);

        Grupo_conexion_serial->setWidget(1, QFormLayout::FieldRole, Cerrar);


        verticalLayout_5->addLayout(Grupo_conexion_serial);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_5->addItem(horizontalSpacer_3);

        label_9 = new QLabel(Maquina);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font4);

        verticalLayout_5->addWidget(label_9);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        Cero_Y = new QPushButton(Maquina);
        Cero_Y->setObjectName(QStringLiteral("Cero_Y"));
        Cero_Y->setMaximumSize(QSize(16777215, 16777215));
        Cero_Y->setFont(font2);

        gridLayout_6->addWidget(Cero_Y, 1, 0, 1, 1);

        Cero_XY = new QPushButton(Maquina);
        Cero_XY->setObjectName(QStringLiteral("Cero_XY"));
        Cero_XY->setMaximumSize(QSize(16777215, 16777215));
        Cero_XY->setFont(font2);

        gridLayout_6->addWidget(Cero_XY, 1, 2, 1, 1);

        Cero_Z = new QPushButton(Maquina);
        Cero_Z->setObjectName(QStringLiteral("Cero_Z"));
        Cero_Z->setMaximumSize(QSize(16777215, 16777215));
        Cero_Z->setFont(font2);

        gridLayout_6->addWidget(Cero_Z, 2, 0, 1, 1);

        Cero_X = new QPushButton(Maquina);
        Cero_X->setObjectName(QStringLiteral("Cero_X"));
        Cero_X->setMaximumSize(QSize(16777215, 16777215));
        Cero_X->setFont(font2);

        gridLayout_6->addWidget(Cero_X, 2, 2, 1, 1);


        verticalLayout_5->addLayout(gridLayout_6);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_9->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(verticalLayout_9);

        label_10 = new QLabel(Maquina);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font4);

        verticalLayout_5->addWidget(label_10);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        Home_Y = new QPushButton(Maquina);
        Home_Y->setObjectName(QStringLiteral("Home_Y"));
        Home_Y->setSizeIncrement(QSize(24, 24));
        Home_Y->setFont(font2);
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../../../../usr/share/icons/Papirus-Light/24x24/actions/go-home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Home_Y->setIcon(icon4);

        gridLayout_2->addWidget(Home_Y, 3, 1, 1, 1);

        Continuar = new QPushButton(Maquina);
        Continuar->setObjectName(QStringLiteral("Continuar"));
        Continuar->setFont(font2);
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../../../../../../../usr/share/icons/Papirus-Light/24x24/actions/player_play.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Continuar->setIcon(icon5);

        gridLayout_2->addWidget(Continuar, 2, 1, 1, 1);

        Home_X = new QPushButton(Maquina);
        Home_X->setObjectName(QStringLiteral("Home_X"));
        Home_X->setFont(font2);
        QIcon icon6;
        icon6.addFile(QStringLiteral("../../../../../../../../usr/share/icons/Papirus-Light/24x24/actions/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Home_X->setIcon(icon6);

        gridLayout_2->addWidget(Home_X, 0, 1, 1, 1);

        Hold = new QPushButton(Maquina);
        Hold->setObjectName(QStringLiteral("Hold"));
        Hold->setFont(font2);
        QIcon icon7;
        icon7.addFile(QStringLiteral("../../../../../../../../usr/share/icons/Papirus-Light/24x24/actions/player_pause.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Hold->setIcon(icon7);

        gridLayout_2->addWidget(Hold, 2, 0, 1, 1);

        Reset = new QPushButton(Maquina);
        Reset->setObjectName(QStringLiteral("Reset"));
        Reset->setMinimumSize(QSize(32, 32));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../../../../../../../../usr/share/icons/Papirus-Light/24x24/actions/unlock.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Reset->setIcon(icon8);
        Reset->setFlat(false);

        gridLayout_2->addWidget(Reset, 3, 0, 1, 1);

        Cero = new QPushButton(Maquina);
        Cero->setObjectName(QStringLiteral("Cero"));
        Cero->setMinimumSize(QSize(24, 24));
        QFont font5;
        font5.setFamily(QStringLiteral("Iosevka"));
        font5.setPointSize(10);
        Cero->setFont(font5);
        QIcon icon9;
        icon9.addFile(QStringLiteral("../../../../../usr/share/icons/Papirus-Light/24x24/actions/fcitx-fullwidth-active.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Cero->setIcon(icon9);
        Cero->setIconSize(QSize(16, 16));
        Cero->setAutoDefault(false);
        Cero->setFlat(false);

        gridLayout_2->addWidget(Cero, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_2);


        horizontalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_8->addLayout(horizontalLayout_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Terminal = new QLineEdit(Maquina);
        Terminal->setObjectName(QStringLiteral("Terminal"));
        Terminal->setMinimumSize(QSize(120, 85));
        Terminal->setMaximumSize(QSize(9999999, 9999999));

        verticalLayout->addWidget(Terminal);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, 0);
        Insertar_comando = new QLineEdit(Maquina);
        Insertar_comando->setObjectName(QStringLiteral("Insertar_comando"));
        Insertar_comando->setMaximumSize(QSize(16777215, 9999999));

        horizontalLayout_2->addWidget(Insertar_comando);

        Enviar = new QPushButton(Maquina);
        Enviar->setObjectName(QStringLiteral("Enviar"));
        Enviar->setMinimumSize(QSize(20, 20));
        Enviar->setMaximumSize(QSize(9999999, 9999999));
        QFont font6;
        font6.setFamily(QStringLiteral("Iosevka"));
        font6.setPointSize(11);
        Enviar->setFont(font6);
        QIcon icon10;
        icon10.addFile(QStringLiteral("../../../../../../usr/share/icons/Numix-Light/scalable/actions/mail-forward-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Enviar->setIcon(icon10);

        horizontalLayout_2->addWidget(Enviar);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_8->addLayout(verticalLayout);

        QIcon icon11;
        icon11.addFile(QStringLiteral("../../../../../../usr/share/icons/Numix-Light/scalable/actions/renamed-edit-find-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Secundario->addTab(Maquina, icon11, QString());
        Lectura = new QWidget();
        Lectura->setObjectName(QStringLiteral("Lectura"));
        horizontalLayout_7 = new QHBoxLayout(Lectura);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Probing = new QPushButton(Lectura);
        Probing->setObjectName(QStringLiteral("Probing"));
        Probing->setMaximumSize(QSize(80, 50));
        QIcon icon12;
        icon12.addFile(QStringLiteral("../../../../../../usr/share/icons/Numix-Light/scalable/actions/zoom-in-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Probing->setIcon(icon12);

        verticalLayout_2->addWidget(Probing);

        Centro = new QPushButton(Lectura);
        Centro->setObjectName(QStringLiteral("Centro"));
        Centro->setMaximumSize(QSize(80, 50));
        Centro->setIcon(icon12);

        verticalLayout_2->addWidget(Centro);

        pushButton_4 = new QPushButton(Lectura);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(80, 50));
        pushButton_4->setIcon(icon12);

        verticalLayout_2->addWidget(pushButton_4);


        horizontalLayout_7->addLayout(verticalLayout_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        Progreso_Gcode = new QProgressBar(Lectura);
        Progreso_Gcode->setObjectName(QStringLiteral("Progreso_Gcode"));
        Progreso_Gcode->setValue(0);

        verticalLayout_7->addWidget(Progreso_Gcode);

        plainTextEdit = new QPlainTextEdit(Lectura);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(9999999, 16777215));
        plainTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));

        verticalLayout_7->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Enviar_2 = new QPushButton(Lectura);
        Enviar_2->setObjectName(QStringLiteral("Enviar_2"));
        QIcon icon13;
        icon13.addFile(QStringLiteral("../../../../../../usr/share/icons/Numix-Light/scalable/actions/object-select-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Enviar_2->setIcon(icon13);

        horizontalLayout->addWidget(Enviar_2);

        Guardar = new QPushButton(Lectura);
        Guardar->setObjectName(QStringLiteral("Guardar"));
        QIcon icon14;
        icon14.addFile(QStringLiteral("../../../../../../usr/share/icons/Numix-Light/scalable/actions/document-save-as-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Guardar->setIcon(icon14);

        horizontalLayout->addWidget(Guardar);

        pushButton = new QPushButton(Lectura);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon15;
        icon15.addFile(QStringLiteral("../../../../../../usr/share/icons/Numix-Light/scalable/actions/document-open-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon15);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_7->addLayout(horizontalLayout);


        horizontalLayout_7->addLayout(verticalLayout_7);

        QIcon icon16;
        icon16.addFile(QStringLiteral("../../../../../../usr/share/icons/Numix-Light/scalable/actions/view-grid-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Secundario->addTab(Lectura, icon16, QString());

        horizontalLayout_3->addWidget(Secundario);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(300, 20));
        label_3->setFont(font1);

        gridLayout_4->addWidget(label_3, 2, 0, 1, 3);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximumSize(QSize(4703, 20));
        horizontalSlider->setMaximum(4095);
        horizontalSlider->setSingleStep(10);
        horizontalSlider->setValue(10);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider, 6, 1, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMaximumSize(QSize(40, 60));
        QIcon icon17;
        icon17.addFile(QStringLiteral("../../../../../../../../usr/share/icons/Papirus-Dark/24x24/apps/display-brightness.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon17);

        gridLayout_4->addWidget(pushButton_7, 6, 2, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(40, 60));
        QIcon icon18;
        icon18.addFile(QStringLiteral("../../../../../../../../usr/share/icons/Papirus-Dark/24x24/apps/display.im6.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon18);

        gridLayout_4->addWidget(pushButton_5, 6, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 0, 1, 3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Z_positivo = new QPushButton(centralwidget);
        Z_positivo->setObjectName(QStringLiteral("Z_positivo"));
        Z_positivo->setMaximumSize(QSize(120, 120));
        QIcon icon19;
        icon19.addFile(QStringLiteral("../../../../../../usr/share/icons/Numix-Light/scalable/actions/go-top-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Z_positivo->setIcon(icon19);

        gridLayout->addWidget(Z_positivo, 0, 3, 1, 1);

        Y_positivo = new QPushButton(centralwidget);
        Y_positivo->setObjectName(QStringLiteral("Y_positivo"));
        Y_positivo->setEnabled(true);
        Y_positivo->setMaximumSize(QSize(120, 120));
        QIcon icon20;
        icon20.addFile(QStringLiteral("../../../../../../../../usr/share/icons/Papirus/24x24/actions/go-up.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Y_positivo->setIcon(icon20);
        Y_positivo->setIconSize(QSize(24, 24));

        gridLayout->addWidget(Y_positivo, 0, 1, 1, 1);

        X_negativo = new QPushButton(centralwidget);
        X_negativo->setObjectName(QStringLiteral("X_negativo"));
        X_negativo->setMaximumSize(QSize(120, 120));
        QIcon icon21;
        icon21.addFile(QStringLiteral("../../../../../../../../usr/share/icons/Papirus/24x24/actions/go-left.svg"), QSize(), QIcon::Normal, QIcon::Off);
        X_negativo->setIcon(icon21);
        X_negativo->setIconSize(QSize(24, 24));

        gridLayout->addWidget(X_negativo, 1, 0, 1, 1);

        Z_negativo = new QPushButton(centralwidget);
        Z_negativo->setObjectName(QStringLiteral("Z_negativo"));
        Z_negativo->setMaximumSize(QSize(120, 120));
        QIcon icon22;
        icon22.addFile(QStringLiteral("../../../../../../usr/share/icons/Numix-Light/scalable/actions/go-bottom-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Z_negativo->setIcon(icon22);

        gridLayout->addWidget(Z_negativo, 2, 3, 1, 1);

        X_positivo = new QPushButton(centralwidget);
        X_positivo->setObjectName(QStringLiteral("X_positivo"));
        X_positivo->setMaximumSize(QSize(120, 120));
        QIcon icon23;
        icon23.addFile(QStringLiteral("../../../../../../../../usr/share/icons/Papirus-Light/24x24/actions/go-next.svg"), QSize(), QIcon::Normal, QIcon::Off);
        X_positivo->setIcon(icon23);
        X_positivo->setIconSize(QSize(24, 24));

        gridLayout->addWidget(X_positivo, 1, 2, 1, 1);

        Y_negativo = new QPushButton(centralwidget);
        Y_negativo->setObjectName(QStringLiteral("Y_negativo"));
        Y_negativo->setMaximumSize(QSize(120, 120));
        QIcon icon24;
        icon24.addFile(QStringLiteral("../../../../../../../../usr/share/icons/Papirus-Light/24x24/actions/go-down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Y_negativo->setIcon(icon24);
        Y_negativo->setIconSize(QSize(24, 24));

        gridLayout->addWidget(Y_negativo, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 9, 0, 1, 3);

        Coordenadas = new QFrame(centralwidget);
        Coordenadas->setObjectName(QStringLiteral("Coordenadas"));
        Coordenadas->setMaximumSize(QSize(89998, 300));
        Coordenadas->setFrameShape(QFrame::StyledPanel);
        Coordenadas->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(Coordenadas);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        Coordena_de_la_maquina = new QLabel(Coordenadas);
        Coordena_de_la_maquina->setObjectName(QStringLiteral("Coordena_de_la_maquina"));
        Coordena_de_la_maquina->setMaximumSize(QSize(300, 20));
        Coordena_de_la_maquina->setFont(font3);

        gridLayout_3->addWidget(Coordena_de_la_maquina, 1, 1, 1, 1);

        Label_estado = new QLabel(Coordenadas);
        Label_estado->setObjectName(QStringLiteral("Label_estado"));
        Label_estado->setFont(font1);

        gridLayout_3->addWidget(Label_estado, 0, 0, 1, 1);

        Label_X = new QLabel(Coordenadas);
        Label_X->setObjectName(QStringLiteral("Label_X"));
        Label_X->setMaximumSize(QSize(40, 60));
        Label_X->setFont(font2);

        gridLayout_3->addWidget(Label_X, 2, 0, 1, 1);

        MPosY = new QLCDNumber(Coordenadas);
        MPosY->setObjectName(QStringLiteral("MPosY"));
        MPosY->setSmallDecimalPoint(true);
        MPosY->setDigitCount(6);

        gridLayout_3->addWidget(MPosY, 3, 1, 1, 1);

        Label_Z = new QLabel(Coordenadas);
        Label_Z->setObjectName(QStringLiteral("Label_Z"));
        Label_Z->setMaximumSize(QSize(40, 60));
        Label_Z->setFont(font2);

        gridLayout_3->addWidget(Label_Z, 4, 0, 1, 1);

        Estado_textBrowser = new QTextBrowser(Coordenadas);
        Estado_textBrowser->setObjectName(QStringLiteral("Estado_textBrowser"));
        Estado_textBrowser->setMaximumSize(QSize(300, 30));

        gridLayout_3->addWidget(Estado_textBrowser, 0, 1, 1, 1);

        MPosZ = new QLCDNumber(Coordenadas);
        MPosZ->setObjectName(QStringLiteral("MPosZ"));
        MPosZ->setMaximumSize(QSize(900000, 100));
        MPosZ->setSmallDecimalPoint(true);
        MPosZ->setDigitCount(6);
        MPosZ->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_3->addWidget(MPosZ, 4, 1, 1, 1);

        Label_Y = new QLabel(Coordenadas);
        Label_Y->setObjectName(QStringLiteral("Label_Y"));
        Label_Y->setMaximumSize(QSize(40, 60));
        Label_Y->setFont(font2);

        gridLayout_3->addWidget(Label_Y, 3, 0, 1, 1);

        MPosX = new QLCDNumber(Coordenadas);
        MPosX->setObjectName(QStringLiteral("MPosX"));
        MPosX->setSmallDecimalPoint(true);
        MPosX->setDigitCount(6);
        MPosX->setSegmentStyle(QLCDNumber::Filled);
        MPosX->setProperty("value", QVariant(0));

        gridLayout_3->addWidget(MPosX, 2, 1, 1, 1);


        gridLayout_4->addWidget(Coordenadas, 0, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 8, 0, 1, 3);

        Valor_potencia_laser = new QLCDNumber(centralwidget);
        Valor_potencia_laser->setObjectName(QStringLiteral("Valor_potencia_laser"));
        Valor_potencia_laser->setMaximumSize(QSize(9000, 60));

        gridLayout_4->addWidget(Valor_potencia_laser, 3, 0, 1, 3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 4, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_4);


        gridLayout_5->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1140, 30));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuAyuda = new QMenu(menubar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuAyuda->menuAction());
        menuArchivo->addAction(actionSalir);
        menuAyuda->addAction(actionAcerca);

        retranslateUi(MainWindow);

        Secundario->setCurrentIndex(2);
        Cero->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAcerca->setText(QApplication::translate("MainWindow", "&Acerca", nullptr));
        actionSalir->setText(QApplication::translate("MainWindow", "&Salir", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Activar_camara->setText(QApplication::translate("MainWindow", "Activar la camara", nullptr));
        Capturar_imagen->setText(QApplication::translate("MainWindow", "Capturar", nullptr));
        Secundario->setTabText(Secundario->indexOf(Camara), QApplication::translate("MainWindow", "Tab 1", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "&0.5mm", nullptr));
#ifndef QT_NO_SHORTCUT
        radioButton->setShortcut(QApplication::translate("MainWindow", "2", nullptr));
#endif // QT_NO_SHORTCUT
        label_Feedrate->setText(QApplication::translate("MainWindow", "Feedrate", nullptr));
        label_Pasos->setText(QApplication::translate("MainWindow", "Pasos", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "0.01&mm", nullptr));
#ifndef QT_NO_SHORTCUT
        radioButton_2->setShortcut(QApplication::translate("MainWindow", "1", nullptr));
#endif // QT_NO_SHORTCUT
        radioButton_3->setText(QApplication::translate("MainWindow", "&100mm", nullptr));
#ifndef QT_NO_SHORTCUT
        radioButton_3->setShortcut(QApplication::translate("MainWindow", "3", nullptr));
#endif // QT_NO_SHORTCUT
        radioButton_4->setText(QApplication::translate("MainWindow", "1000mm", nullptr));
#ifndef QT_NO_SHORTCUT
        radioButton_4->setShortcut(QApplication::translate("MainWindow", "4", nullptr));
#endif // QT_NO_SHORTCUT
        label_6->setText(QApplication::translate("MainWindow", "Conexi\303\263n", nullptr));
        Conectar->setText(QApplication::translate("MainWindow", "Conectar", nullptr));
        Cerrar->setText(QApplication::translate("MainWindow", "Cerrar", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Eje a cero", nullptr));
        Cero_Y->setText(QApplication::translate("MainWindow", "Y0", nullptr));
#ifndef QT_NO_SHORTCUT
        Cero_Y->setShortcut(QApplication::translate("MainWindow", "W", nullptr));
#endif // QT_NO_SHORTCUT
        Cero_XY->setText(QApplication::translate("MainWindow", "X0Y0", nullptr));
#ifndef QT_NO_SHORTCUT
        Cero_XY->setShortcut(QApplication::translate("MainWindow", "Z", nullptr));
#endif // QT_NO_SHORTCUT
        Cero_Z->setText(QApplication::translate("MainWindow", "Z0", nullptr));
#ifndef QT_NO_SHORTCUT
        Cero_Z->setShortcut(QApplication::translate("MainWindow", "Y", nullptr));
#endif // QT_NO_SHORTCUT
        Cero_X->setText(QApplication::translate("MainWindow", "X0", nullptr));
#ifndef QT_NO_SHORTCUT
        Cero_X->setShortcut(QApplication::translate("MainWindow", "A", nullptr));
#endif // QT_NO_SHORTCUT
        label_10->setText(QApplication::translate("MainWindow", "Control", nullptr));
        Home_Y->setText(QApplication::translate("MainWindow", "Y", nullptr));
#ifndef QT_NO_SHORTCUT
        Home_Y->setShortcut(QApplication::translate("MainWindow", "T", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_SHORTCUT
        Continuar->setShortcut(QApplication::translate("MainWindow", "M", nullptr));
#endif // QT_NO_SHORTCUT
        Home_X->setText(QApplication::translate("MainWindow", "X", nullptr));
#ifndef QT_NO_SHORTCUT
        Home_X->setShortcut(QApplication::translate("MainWindow", "R", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_SHORTCUT
        Hold->setShortcut(QApplication::translate("MainWindow", "F", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_SHORTCUT
        Reset->setShortcut(QApplication::translate("MainWindow", "H", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_SHORTCUT
        Cero->setShortcut(QApplication::translate("MainWindow", "U", nullptr));
#endif // QT_NO_SHORTCUT
        Enviar->setText(QApplication::translate("MainWindow", "Enviar", nullptr));
#ifndef QT_NO_SHORTCUT
        Enviar->setShortcut(QApplication::translate("MainWindow", "Enter", nullptr));
#endif // QT_NO_SHORTCUT
        Secundario->setTabText(Secundario->indexOf(Maquina), QApplication::translate("MainWindow", "Tab 2", nullptr));
        Probing->setText(QApplication::translate("MainWindow", "Probing", nullptr));
#ifndef QT_NO_SHORTCUT
        Probing->setShortcut(QApplication::translate("MainWindow", "D", nullptr));
#endif // QT_NO_SHORTCUT
        Centro->setText(QApplication::translate("MainWindow", "Centro", nullptr));
#ifndef QT_NO_SHORTCUT
        Centro->setShortcut(QApplication::translate("MainWindow", "C", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_4->setText(QApplication::translate("MainWindow", "Macro 3", nullptr));
        Enviar_2->setText(QApplication::translate("MainWindow", "Enviar", nullptr));
        Guardar->setText(QApplication::translate("MainWindow", "Guardar", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Abrir", nullptr));
        Secundario->setTabText(Secundario->indexOf(Lectura), QApplication::translate("MainWindow", "Page", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "PWM l\303\241ser/router", nullptr));
        pushButton_7->setText(QString());
        pushButton_5->setText(QString());
        Z_positivo->setText(QApplication::translate("MainWindow", "+Z", nullptr));
#ifndef QT_NO_SHORTCUT
        Z_positivo->setShortcut(QApplication::translate("MainWindow", "P", nullptr));
#endif // QT_NO_SHORTCUT
        Y_positivo->setText(QString());
#ifndef QT_NO_SHORTCUT
        Y_positivo->setShortcut(QApplication::translate("MainWindow", "I", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_SHORTCUT
        X_negativo->setShortcut(QApplication::translate("MainWindow", "J", nullptr));
#endif // QT_NO_SHORTCUT
        Z_negativo->setText(QApplication::translate("MainWindow", "-Z", nullptr));
#ifndef QT_NO_SHORTCUT
        Z_negativo->setShortcut(QApplication::translate("MainWindow", "N", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_SHORTCUT
        X_positivo->setShortcut(QApplication::translate("MainWindow", "L", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_SHORTCUT
        Y_negativo->setShortcut(QApplication::translate("MainWindow", "K", nullptr));
#endif // QT_NO_SHORTCUT
        Coordena_de_la_maquina->setText(QApplication::translate("MainWindow", "Coordenadas de la maquina", nullptr));
        Label_estado->setText(QApplication::translate("MainWindow", "Estado", nullptr));
        Label_X->setText(QApplication::translate("MainWindow", "| X |", nullptr));
        Label_Z->setText(QApplication::translate("MainWindow", "| Z |", nullptr));
        Label_Y->setText(QApplication::translate("MainWindow", "| Y |", nullptr));
        menuArchivo->setTitle(QApplication::translate("MainWindow", "A&rchivo", nullptr));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "A&yuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
