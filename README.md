# CStrikerCNC-Control
Interfaz creada por Adrián Darío Díaz López para el control de CStrikerCNC y BStrikerCNC; permite el control y envio de archivos Gcode de manera simplificada.
## Librerías necesarias
Las librerías necesarias para el sistemas son las siguientes;
    - OpenCV 3.4
    - Qt5
    - qt5serial
    - Iosevka
Se maneja un sistema de paquetes dpkg mediante el siguiente comando se realizará la instalación de las librerías:

$ apt install qt5-default libqt5* libopencv*

## Descargando el codigo fuente
Una vez instalado las librerías necesarias, descargamos el código fuente creado por nosotros mediante el repositorio personal.

$ git clone https://github.com/Xtriker/CStrikerCNC-Control.git

Descargado el código fuente continuamos con la compilación del programa. Nos dirigimos al directorio del programa, en donde guardamos el archivo previamente descargado y mediante la terminal compilamos el programa, como se muestra a continuación:

$ qmake *.pro && make

## Integración de GT2 y Qt

Cuando sea compilada la aplicación y no se ejecute y mande una serie de errores por falta de la integración de la interfaz se tendría que instalar una serie de paquetes. Esta serie de paquetes son los siguientes:

$ sudo apt install -y qt5-style-kvantum qt5-style-kvantum-themes papirus-icon-theme

Desde realizamos las siguientes configuraciones

$ echo "export QT_STYLE_OVERRIDE=kvantum" >> ~/.profile
$ echo "export QT_STYLE_OVERRIDE=kvantum" >> ~/.bashrc

Esto también lo realizamos en el entorno root, y lo guardamos en:

$ sudo echo "export QT_STYLE_OVERRIDE=kvantum" >> /etc/enviroment

En la situación de no ser encontrado el programa echo, abrimos mediante el editor de texto favorito y colocamos los argumentos, quedando de la siguiente manera:

$ sudo vim /etc/enviroment

Y colocamos lo siguiente:

export QT_STYLE_OVERRIDE=kvantum

Lo guardamos y reiniciamos el sistema. Por defecto la aplicación usa un tipo especifico de tipografía, por eso es necesario realizar la instalación de la tipografía llamada "Iosevka", esta instalación se realiza mediante un respositorio de Github:

## Instalando las tipografias

wget https://github.com/be5invis/Iosevka/releases/download/v5.1.1/ttc-iosevka-5.1.1.zip && unzip ttc-iosevka-5.1.1.zip

Después tendremos que mover las tipografías a un directorio en especifico y realizar un actualización de la librerías instaladas en el sistema, \noindent Todo esto de la siguiente manera:

sudo mv *.ttc /usr/share/fonts && sudo fc-cache -f -v

Para terminal, es necesario ejecutar la aplicación kvantum, tendra que dirigirse la la sección de  "Cambiar/borrar temas", después en el menu de "Seleccione un tema: ", buscamos el tema que tengamos instalado por defecto en el sistema, si se esta ejecutando Ubuntu, el tema por defecto se llama "KvAbimbiance", si esta usado un derivado de Ubuntu como Linux Mint, el tema por defecto se llama "Mint"; si tiene instalado un tema personalizado, tendrá que buscar en la lista el nombre del tema. 
