#ifndef APLICACIONES_H
#define APLICACIONES_H

#include<opencv2/core/core.hpp>
#include<opencv2/ml/ml.hpp>
#include <opencv2/opencv.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/video/background_segm.hpp>
#include<opencv2/videoio.hpp>
#include<opencv2/imgcodecs.hpp>
#include<QDebug> //Similar a la funcion cout
#include<QTimer>
#include<QMouseEvent>
#include<QSerialPort>
#include<QSerialPortInfo>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include <QDir>
enum{
    Camara_IP,
    Camara_Web
};
#endif // APLICACIONES_H
