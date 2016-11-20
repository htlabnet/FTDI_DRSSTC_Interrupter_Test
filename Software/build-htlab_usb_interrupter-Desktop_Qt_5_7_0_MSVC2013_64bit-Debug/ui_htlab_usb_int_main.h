/********************************************************************************
** Form generated from reading UI file 'htlab_usb_int_main.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTLAB_USB_INT_MAIN_H
#define UI_HTLAB_USB_INT_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_htlab_usb_int_main
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *htlab_usb_int_main)
    {
        if (htlab_usb_int_main->objectName().isEmpty())
            htlab_usb_int_main->setObjectName(QStringLiteral("htlab_usb_int_main"));
        htlab_usb_int_main->resize(400, 300);
        centralWidget = new QWidget(htlab_usb_int_main);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 20, 75, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 20, 75, 23));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 70, 75, 23));
        htlab_usb_int_main->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(htlab_usb_int_main);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        htlab_usb_int_main->setMenuBar(menuBar);
        mainToolBar = new QToolBar(htlab_usb_int_main);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        htlab_usb_int_main->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(htlab_usb_int_main);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        htlab_usb_int_main->setStatusBar(statusBar);

        retranslateUi(htlab_usb_int_main);

        QMetaObject::connectSlotsByName(htlab_usb_int_main);
    } // setupUi

    void retranslateUi(QMainWindow *htlab_usb_int_main)
    {
        htlab_usb_int_main->setWindowTitle(QApplication::translate("htlab_usb_int_main", "htlab_usb_int_main", 0));
        pushButton->setText(QApplication::translate("htlab_usb_int_main", "Devices", 0));
        pushButton_2->setText(QApplication::translate("htlab_usb_int_main", "Open", 0));
        pushButton_3->setText(QApplication::translate("htlab_usb_int_main", "Close", 0));
        pushButton_4->setText(QApplication::translate("htlab_usb_int_main", "send", 0));
    } // retranslateUi

};

namespace Ui {
    class htlab_usb_int_main: public Ui_htlab_usb_int_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTLAB_USB_INT_MAIN_H
