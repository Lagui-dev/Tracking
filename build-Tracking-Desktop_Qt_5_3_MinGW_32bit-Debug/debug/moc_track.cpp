/****************************************************************************
** Meta object code from reading C++ file 'track.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/track.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'track.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_track_t {
    QByteArrayData data[15];
    char stringdata[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_track_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_track_t qt_meta_stringdata_track = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 19),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 17),
QT_MOC_LITERAL(4, 45, 19),
QT_MOC_LITERAL(5, 65, 20),
QT_MOC_LITERAL(6, 86, 20),
QT_MOC_LITERAL(7, 107, 19),
QT_MOC_LITERAL(8, 127, 21),
QT_MOC_LITERAL(9, 149, 14),
QT_MOC_LITERAL(10, 164, 5),
QT_MOC_LITERAL(11, 170, 9),
QT_MOC_LITERAL(12, 180, 1),
QT_MOC_LITERAL(13, 182, 11),
QT_MOC_LITERAL(14, 194, 3)
    },
    "track\0on_btnClose_clicked\0\0on_btnAdd_clicked\0"
    "on_btnTheme_clicked\0on_btnModify_clicked\0"
    "on_btnDelete_clicked\0on_btnPrint_clicked\0"
    "on_btnRefresh_clicked\0ColorTableView\0"
    "print\0QPrinter*\0p\0JeTesteBien\0idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_track[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      13,    1,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void track::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        track *_t = static_cast<track *>(_o);
        switch (_id) {
        case 0: _t->on_btnClose_clicked(); break;
        case 1: _t->on_btnAdd_clicked(); break;
        case 2: _t->on_btnTheme_clicked(); break;
        case 3: _t->on_btnModify_clicked(); break;
        case 4: _t->on_btnDelete_clicked(); break;
        case 5: _t->on_btnPrint_clicked(); break;
        case 6: _t->on_btnRefresh_clicked(); break;
        case 7: _t->ColorTableView(); break;
        case 8: _t->print((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 9: _t->JeTesteBien((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject track::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_track.data,
      qt_meta_data_track,  qt_static_metacall, 0, 0}
};


const QMetaObject *track::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *track::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_track.stringdata))
        return static_cast<void*>(const_cast< track*>(this));
    return QWidget::qt_metacast(_clname);
}

int track::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE