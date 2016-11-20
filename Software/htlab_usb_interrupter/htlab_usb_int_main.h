#ifndef HTLAB_USB_INT_MAIN_H
#define HTLAB_USB_INT_MAIN_H

#include <QMainWindow>

namespace Ui {
class htlab_usb_int_main;
}

class htlab_usb_int_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit htlab_usb_int_main(QWidget *parent = 0);
    ~htlab_usb_int_main();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::htlab_usb_int_main *ui;
};

#endif // HTLAB_USB_INT_MAIN_H
