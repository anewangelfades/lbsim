/****************************************************************************
** Meta object code from reading C++ file 'info.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "view/info.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'info.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Info_t {
    QByteArrayData data[10];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Info_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Info_t qt_meta_stringdata_Info = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Info"
QT_MOC_LITERAL(1, 5, 24), // "on_disableCharts_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 27), // "on_multicoreSupport_clicked"
QT_MOC_LITERAL(4, 59, 22), // "on_infoX_returnPressed"
QT_MOC_LITERAL(5, 82, 22), // "on_infoY_returnPressed"
QT_MOC_LITERAL(6, 105, 22), // "on_infoZ_returnPressed"
QT_MOC_LITERAL(7, 128, 23), // "on_infoX2_returnPressed"
QT_MOC_LITERAL(8, 152, 23), // "on_infoY2_returnPressed"
QT_MOC_LITERAL(9, 176, 23) // "on_infoZ2_returnPressed"

    },
    "Info\0on_disableCharts_clicked\0\0"
    "on_multicoreSupport_clicked\0"
    "on_infoX_returnPressed\0on_infoY_returnPressed\0"
    "on_infoZ_returnPressed\0on_infoX2_returnPressed\0"
    "on_infoY2_returnPressed\0on_infoZ2_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Info[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Info::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Info *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_disableCharts_clicked(); break;
        case 1: _t->on_multicoreSupport_clicked(); break;
        case 2: _t->on_infoX_returnPressed(); break;
        case 3: _t->on_infoY_returnPressed(); break;
        case 4: _t->on_infoZ_returnPressed(); break;
        case 5: _t->on_infoX2_returnPressed(); break;
        case 6: _t->on_infoY2_returnPressed(); break;
        case 7: _t->on_infoZ2_returnPressed(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Info::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_Info.data,
    qt_meta_data_Info,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Info::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Info::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Info.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Listener"))
        return static_cast< Listener*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int Info::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
