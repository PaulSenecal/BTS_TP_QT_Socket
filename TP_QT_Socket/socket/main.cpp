/*
 Version:1.0
 Goal:Communicate with server with socket.
 Date:25/03/22
 by:Paul_SNL
*/#include "mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
