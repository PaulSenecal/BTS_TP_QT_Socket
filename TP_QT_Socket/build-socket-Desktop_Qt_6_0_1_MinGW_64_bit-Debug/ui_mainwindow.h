/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *qLineEditIpAddr;
    QLineEdit *lineEditSendData;
    QPushButton *connectButton;
    QTextEdit *textEditDisplatData;
    QLabel *labelConnect;
    QLabel *labelAddr;
    QMenuBar *menubar;
    QMenu *menuQTSocket;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        qLineEditIpAddr = new QLineEdit(centralwidget);
        qLineEditIpAddr->setObjectName(QString::fromUtf8("qLineEditIpAddr"));
        qLineEditIpAddr->setGeometry(QRect(160, 60, 401, 24));
        QFont font;
        font.setPointSize(10);
        qLineEditIpAddr->setFont(font);
        lineEditSendData = new QLineEdit(centralwidget);
        lineEditSendData->setObjectName(QString::fromUtf8("lineEditSendData"));
        lineEditSendData->setGeometry(QRect(160, 360, 521, 24));
        connectButton = new QPushButton(centralwidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(579, 60, 101, 25));
        QFont font1;
        font1.setPointSize(12);
        connectButton->setFont(font1);
        textEditDisplatData = new QTextEdit(centralwidget);
        textEditDisplatData->setObjectName(QString::fromUtf8("textEditDisplatData"));
        textEditDisplatData->setGeometry(QRect(160, 90, 521, 261));
        textEditDisplatData->setFont(font1);
        labelConnect = new QLabel(centralwidget);
        labelConnect->setObjectName(QString::fromUtf8("labelConnect"));
        labelConnect->setGeometry(QRect(690, 200, 101, 16));
        labelConnect->setFont(font1);
        labelAddr = new QLabel(centralwidget);
        labelAddr->setObjectName(QString::fromUtf8("labelAddr"));
        labelAddr->setGeometry(QRect(0, 60, 151, 20));
        labelAddr->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuQTSocket = new QMenu(menubar);
        menuQTSocket->setObjectName(QString::fromUtf8("menuQTSocket"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuQTSocket->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        qLineEditIpAddr->setText(QCoreApplication::translate("MainWindow", "Ex:192.168.199.1", nullptr));
        connectButton->setText(QCoreApplication::translate("MainWindow", "Connecter", nullptr));
        labelConnect->setText(QCoreApplication::translate("MainWindow", "Connecter", nullptr));
        labelAddr->setText(QCoreApplication::translate("MainWindow", "Adresse serveur", nullptr));
        menuQTSocket->setTitle(QCoreApplication::translate("MainWindow", "QTSocket", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
