/****************************************************************************
** Meta object code from reading C++ file 'htlab_usb_int_main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../htlab_usb_interrupter/htlab_usb_int_main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'htlab_usb_int_main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_htlab_usb_int_main_t {
    QByteArrayData data[6];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_htlab_usb_int_main_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_htlab_usb_int_main_t qt_meta_stringdata_htlab_usb_int_main = {
    {
QT_MOC_LITERAL(0, 0, 18), // "htlab_usb_int_main"
QT_MOC_LITERAL(1, 19, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 66, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(5, 90, 23) // "on_pushButton_4_clicked"

    },
    "htlab_usb_int_main\0on_pushButton_clicked\0"
    "\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_htlab_usb_int_main[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void htlab_usb_int_main::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        htlab_usb_int_main *_t = static_cast<htlab_usb_int_main *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject htlab_usb_int_main::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_htlab_usb_int_main.data,
      qt_meta_data_htlab_usb_int_main,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *htlab_usb_int_main::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *htlab_usb_int_main::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_htlab_usb_int_main.stringdata0))
        return static_cast<void*>(const_cast< htlab_usb_int_main*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int htlab_usb_int_main::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
