#include <QApplication>
#include <server.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    server *Server = new server;
    Server->show();
    return a.exec();
}
