#include "htlab_usb_int_main.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    htlab_usb_int_main w;
    w.show();

    return a.exec();
}
