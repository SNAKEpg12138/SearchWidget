#include "mywidgets.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidgets w;
    w.show();
    return a.exec();
}
