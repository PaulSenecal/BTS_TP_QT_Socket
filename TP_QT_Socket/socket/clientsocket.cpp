#include "clientsocket.h"

ClientSocket::ClientSocket(QObject *parent):QObject(parent)
{

}
bool ClientSocket::connectToHost(QString host)
{
    socket->connectToHost(host,15000);
    return socket->waitForConnected(5000);
}
void ClientSocket::disconnectFromHost()
{
    socket->abort();
}
void ClientSocket::onReadyRead()
{
    QByteArray datas=socket->readAll();
    emit dataReceived(datas);
}

void ClientSocket::connected()
{
    qDebug()<<"connecte";
}
void ClientSocket::disconnected()
{
    qDebug()<<"deconnecte";
}
void ClientSocket::send(QByteArray text)
{
    socket->write(text);
}

