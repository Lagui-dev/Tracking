/****************************************************************************
** Meta object code from reading C++ file 'trackedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/trackedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_trackedit_t {
    QByteArrayData data[14];
    char stringdata[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_trackedit_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_trackedit_t qt_meta_stringdata_trackedit = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 7),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 3),
QT_MOC_LITERAL(4, 23, 31),
QT_MOC_LITERAL(5, 55, 5),
QT_MOC_LITERAL(6, 61, 16),
QT_MOC_LITERAL(7, 78, 20),
QT_MOC_LITERAL(8, 99, 22),
QT_MOC_LITERAL(9, 122, 7),
QT_MOC_LITERAL(10, 130, 23),
QT_MOC_LITERAL(11, 154, 23),
QT_MOC_LITERAL(12, 178, 4),
QT_MOC_LITERAL(13, 183, 24)
    },
    "trackedit\0JeTeste\0\0idx\0"
    "on_cmbLevel_currentIndexChanged\0index\0"
    "on_btnOk_clicked\0on_btnCancel_clicked\0"
    "on_chkOpenDate_toggled\0checked\0"
    "on_chkCloseDate_toggled\0on_dateOpen_dateChanged\0"
    "date\0on_dateClose_dateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_trackedit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   57,    2, 0x08 /* Private */,
       6,    0,   60,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
      10,    1,   65,    2, 0x08 /* Private */,
      11,    1,   68,    2, 0x08 /* Private */,
      13,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QDate,   12,
    QMetaType::Void, QMetaType::QDate,   12,

       0        // eod
};

void trackedit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        trackedit *_t = static_cast<trackedit *>(_o);
        switch (_id) {
        case 0: _t->JeTeste((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_cmbLevel_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_btnOk_clicked(); break;
        case 3: _t->on_btnCancel_clicked(); break;
        case 4: _t->on_chkOpenDate_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_chkCloseDate_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_dateOpen_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 7: _t->on_dateClose_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (trackedit::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&trackedit::JeTeste)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject trackedit::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_trackedit.data,
      qt_meta_data_trackedit,  qt_static_metacall, 0, 0}
};


const QMetaObject *trackedit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *trackedit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_trackedit.stringdata))
        return static_cast<void*>(const_cast< trackedit*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int trackedit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void trackedit::JeTeste(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
