/****************************************************************************
** Meta object code from reading C++ file 'painterconfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "view/painterconfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'painterconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PainterConfig_t {
    QByteArrayData data[14];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PainterConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PainterConfig_t qt_meta_stringdata_PainterConfig = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PainterConfig"
QT_MOC_LITERAL(1, 14, 31), // "on_strategy_currentIndexChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "index"
QT_MOC_LITERAL(4, 53, 17), // "on_update_clicked"
QT_MOC_LITERAL(5, 71, 24), // "on_equallySpaced_clicked"
QT_MOC_LITERAL(6, 96, 17), // "on_custom_clicked"
QT_MOC_LITERAL(7, 114, 17), // "on_addRow_clicked"
QT_MOC_LITERAL(8, 132, 20), // "on_deleteRow_clicked"
QT_MOC_LITERAL(9, 153, 25), // "on_updateIsolines_clicked"
QT_MOC_LITERAL(10, 179, 41), // "on_streamIntegrationX_current..."
QT_MOC_LITERAL(11, 221, 41), // "on_streamIntegrationY_current..."
QT_MOC_LITERAL(12, 263, 23), // "on_sortIsolines_clicked"
QT_MOC_LITERAL(13, 287, 25) // "on_randomIsolines_clicked"

    },
    "PainterConfig\0on_strategy_currentIndexChanged\0"
    "\0index\0on_update_clicked\0"
    "on_equallySpaced_clicked\0on_custom_clicked\0"
    "on_addRow_clicked\0on_deleteRow_clicked\0"
    "on_updateIsolines_clicked\0"
    "on_streamIntegrationX_currentIndexChanged\0"
    "on_streamIntegrationY_currentIndexChanged\0"
    "on_sortIsolines_clicked\0"
    "on_randomIsolines_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PainterConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    0,   72,    2, 0x08 /* Private */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PainterConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PainterConfig *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_strategy_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_update_clicked(); break;
        case 2: _t->on_equallySpaced_clicked(); break;
        case 3: _t->on_custom_clicked(); break;
        case 4: _t->on_addRow_clicked(); break;
        case 5: _t->on_deleteRow_clicked(); break;
        case 6: _t->on_updateIsolines_clicked(); break;
        case 7: _t->on_streamIntegrationX_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_streamIntegrationY_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_sortIsolines_clicked(); break;
        case 10: _t->on_randomIsolines_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PainterConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PainterConfig.data,
    qt_meta_data_PainterConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PainterConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PainterConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PainterConfig.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PainterConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
