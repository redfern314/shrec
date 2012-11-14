#ifndef NET_SERV_H
#define NET_SERV_H

#include <QtNetwork>
#include <QtGui/QApplication>
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class Server: public QObject
{
Q_OBJECT
public:
  Server(QObject * parent = 0);
  ~Server();
public slots:
  void acceptConnection();
  void startRead();
private:
  QTcpServer server;
  QTcpSocket* client;
};

#endif