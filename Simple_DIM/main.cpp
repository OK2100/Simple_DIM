#include <QCoreApplication>
extern "C"{
#include "../dim_v20r26/dim/dis.hxx"
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    DimServer::setDnsNode("hplu-Notebook-PC");

    int val = 13;
    DimService serv("Test_service",val);
    DimCommand cmnd("Test_command","I");
    DimServer::start("TEST SERVER");

    return a.exec();
}
