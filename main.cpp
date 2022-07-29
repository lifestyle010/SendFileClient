#include "sendfileclient.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SendFileClient w;
    w.show();
    return a.exec();
}
