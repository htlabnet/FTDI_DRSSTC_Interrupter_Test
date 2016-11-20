#-------------------------------------------------
#
# Project created by QtCreator 2016-11-18T02:07:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = htlab_usb_interrupter
TEMPLATE = app


SOURCES += main.cpp\
        htlab_usb_int_main.cpp

HEADERS  += htlab_usb_int_main.h

FORMS    += htlab_usb_int_main.ui


win32: LIBS += -L$$PWD/../Drivers/Windows/amd64/ -lftd2xx

INCLUDEPATH += $$PWD/../Drivers/Windows
DEPENDPATH += $$PWD/../Drivers/Windows

