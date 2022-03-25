#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      client(this)//, _socket(this)
{
    ui->setupUi(this);
    connect(&client,SIGNAL(dataReceived(QByteArray)),this,SLOT(afficherMessage(QByteArray)));
    connect(&client,SIGNAL(serverDisconnected()),this,SLOT(serverDisconnected()));
    ui->qLineEditIpAddr->setText("192.168.199.1");
    ui->connectButton->setEnabled(false);
    ui->labelConnect->setText(".......");

    /*_socket.connectToHost(QHostAddress("192.168.199.1"),15000);
    connect(&_socket,SIGNAL(connected()),this,SLOT(onConnected()));
    connect(&_socket,SIGNAL(readyRead()),this,SLOT(onReadyRead()));*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
void MainWindow::onReadyRead()
{
    QByteArray datas = _socket.readAll();
    qDebug()<<datas;
    _socket.write(QByteArray("ok!\n"));
}

void MainWindow::onConnected()
{
    qDebug()<<"Connecter";
}
*/
void MainWindow::on_qLineEditIpAddr_returnPressed()
{
    serveur_adresse=ui->qLineEditIpAddr->text();
    ui->connectButton->setEnabled(true);
    qDebug()<<(serveur_adresse);
}

void MainWindow::on_lineEditSendData_returnPressed()
{
    QByteArray text = (ui->lineEditSendData->text()).toUtf8();
    client.send(text);
    ui->lineEditSendData->clear();
}

void MainWindow::on_connectButton_clicked()
{
    if (connection==false)
    {
        bool ret=client.connectToHost(serveur_adresse);

        if(ret==true)
        {
            client.send("Bonjour");
            ui->labelConnect->setText("Connect OK");
            connection=true;
            ui->connectButton->setText("Deconnecter");
            ui->textEditDisplatData->clear();
        }
        else
        {
            ui->textEditDisplatData->append("delai depasse");
            ui->labelConnect->setText("connect false");
            ui->connectButton->setEnabled(false);
        }

    }
    else
    {
        client.disconnectFromHost();
    }
}
void MainWindow::afficherMessage(QByteArray data)
{
    qDebug()<<"ok";
    ui->textEditDisplatData->setTextColor("red");
    ui->textEditDisplatData->append(data);
}
void MainWindow::serverDisconnected()
{
    connection=false;
    ui->labelConnect->setText("serveur deco");
    ui->connectButton->setText("connecter");
    ui->connectButton->setEnabled("false");
}
