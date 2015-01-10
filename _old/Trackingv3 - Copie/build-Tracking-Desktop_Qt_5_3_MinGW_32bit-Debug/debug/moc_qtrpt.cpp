/****************************************************************************
** Meta object code from reading C++ file 'qtrpt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtRPT/qtrpt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtrpt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtRPT_t {
    QByteArrayData data[21];
    char stringdata[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtRPT_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtRPT_t qt_meta_stringdata_QtRPT = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 8),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 4),
QT_MOC_LITERAL(4, 21, 5),
QT_MOC_LITERAL(5, 27, 8),
QT_MOC_LITERAL(6, 36, 9),
QT_MOC_LITERAL(7, 46, 9),
QT_MOC_LITERAL(8, 56, 10),
QT_MOC_LITERAL(9, 67, 10),
QT_MOC_LITERAL(10, 78, 8),
QT_MOC_LITERAL(11, 87, 15),
QT_MOC_LITERAL(12, 103, 11),
QT_MOC_LITERAL(13, 115, 13),
QT_MOC_LITERAL(14, 129, 7),
QT_MOC_LITERAL(15, 137, 15),
QT_MOC_LITERAL(16, 153, 6),
QT_MOC_LITERAL(17, 160, 5),
QT_MOC_LITERAL(18, 166, 12),
QT_MOC_LITERAL(19, 179, 9),
QT_MOC_LITERAL(20, 189, 7)
    },
    "QtRPT\0setValue\0\0int&\0recNo\0QString&\0"
    "paramName\0QVariant&\0paramValue\0"
    "reportPage\0setField\0RptFieldObject&\0"
    "fieldObject\0setValueImage\0QImage&\0"
    "setValueDiagram\0Chart&\0chart\0printPreview\0"
    "QPrinter*\0printer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtRPT[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   39,    2, 0x06 /* Public */,
      10,    1,   48,    2, 0x06 /* Public */,
      13,    4,   51,    2, 0x06 /* Public */,
      15,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7, QMetaType::Int,    4,    6,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 14, QMetaType::Int,    4,    6,    8,    9,
    QMetaType::Void, 0x80000000 | 16,   17,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void QtRPT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtRPT *_t = static_cast<QtRPT *>(_o);
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->setField((*reinterpret_cast< RptFieldObject(*)>(_a[1]))); break;
        case 2: _t->setValueImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QImage(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->setValueDiagram((*reinterpret_cast< Chart(*)>(_a[1]))); break;
        case 4: _t->printPreview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtRPT::*_t)(int & , QString & , QVariant & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtRPT::setValue)) {
                *result = 0;
            }
        }
        {
            typedef void (QtRPT::*_t)(RptFieldObject & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtRPT::setField)) {
                *result = 1;
            }
        }
        {
            typedef void (QtRPT::*_t)(int & , QString & , QImage & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtRPT::setValueImage)) {
                *result = 2;
            }
        }
        {
            typedef void (QtRPT::*_t)(Chart & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtRPT::setValueDiagram)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QtRPT::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtRPT.data,
      qt_meta_data_QtRPT,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtRPT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtRPT::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtRPT.stringdata))
        return static_cast<void*>(const_cast< QtRPT*>(this));
    return QWidget::qt_metacast(_clname);
}

int QtRPT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QtRPT::setValue(int & _t1, QString & _t2, QVariant & _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtRPT::setField(RptFieldObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtRPT::setValueImage(int & _t1, QString & _t2, QImage & _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtRPT::setValueDiagram(Chart & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
