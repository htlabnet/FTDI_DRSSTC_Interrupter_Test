#include "htlab_usb_int_main.h"
#include "ui_htlab_usb_int_main.h"

#include <ftd2xx.h>
#include <QDebug>


FT_HANDLE ftHandle;
FT_STATUS ftStatus;


htlab_usb_int_main::htlab_usb_int_main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::htlab_usb_int_main)
{
    ui->setupUi(this);
}

htlab_usb_int_main::~htlab_usb_int_main()
{
    delete ui;
}

void htlab_usb_int_main::on_pushButton_clicked()
{

        unsigned long numDevs;
        // create the device information list
        ftStatus = FT_CreateDeviceInfoList(&numDevs);

        if (ftStatus == FT_OK) {

        qDebug () << numDevs;
     //   printf("Number of devices is %d \n",numDevs);
        }
        else {
        // FT_CreateDeviceInfoList failed
        }




}

void htlab_usb_int_main::on_pushButton_2_clicked()
{

    unsigned int deviceid = 0;
    ftStatus = FT_Open(deviceid,&ftHandle);
    if (ftStatus != FT_OK) {
        qDebug("failed");
    } else {
        qDebug("done");
    }


}

void htlab_usb_int_main::on_pushButton_3_clicked()
{
    FT_Close(ftHandle);
    qDebug("close");
}

void htlab_usb_int_main::on_pushButton_4_clicked()
{

    unsigned char data[16] = {0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,0x00, 0xff, 0x00, 0xff,0x00, 0xff, 0x00, 0xff};

    DWORD writtenbytes;

    ftStatus = FT_Write(ftHandle, &data, 16, &writtenbytes);
    qDebug() << writtenbytes;


}

