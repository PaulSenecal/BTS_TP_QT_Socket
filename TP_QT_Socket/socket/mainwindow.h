#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QHostAddress>
#include "clientsocket.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString serveur_adresse;
public slots:
    //void onReadyRead();
    //void onConnected();
private slots:
    void on_qLineEditIpAddr_returnPressed();
    void on_lineEditSendData_returnPressed();
    void on_connectButton_clicked();
    void afficherMessage(QByteArray);
    void serverDisconnected();

private:
    Ui::MainWindow *ui;
    ClientSocket client;
    bool connection=false;
    //QTcpSocket _socket;
};
#endif // MAINWINDOW_H
