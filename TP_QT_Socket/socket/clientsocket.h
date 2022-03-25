#ifndef CLIENTSOCKET_H
#define CLIENTSOCKET_H

#include <QObject>
#include <QTcpSocket>

class ClientSocket : public QObject
{
        Q_OBJECT
    public:
        explicit ClientSocket(QObject *parent=nullptr);
        bool connectToHost(QString host);
        void disconnectFromHost();
        void send(QByteArray);
    signals:
        void dataReceived(QByteArray);
        void serverDiconnected();
    public slots:
        void onReadyRead();
        void connected();
        void disconnected();
    private slots:
    private:
        QTcpSocket *socket;
};

#endif // CLIENTSOCKET_H
