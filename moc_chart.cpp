/****************************************************************************
** Meta object code from reading C++ file 'chart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "view/chart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Chart_t {
    QByteArrayData data[20];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Chart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Chart_t qt_meta_stringdata_Chart = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Chart"
QT_MOC_LITERAL(1, 6, 18), // "plotPickerSelected"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "pos"
QT_MOC_LITERAL(4, 30, 22), // "on_fixedUpdate_clicked"
QT_MOC_LITERAL(5, 53, 21), // "on_fixedScale_clicked"
QT_MOC_LITERAL(6, 75, 20), // "on_autoScale_clicked"
QT_MOC_LITERAL(7, 96, 21), // "on_xValue_textChanged"
QT_MOC_LITERAL(8, 118, 21), // "on_yValue_textChanged"
QT_MOC_LITERAL(9, 140, 21), // "on_zValue_textChanged"
QT_MOC_LITERAL(10, 162, 32), // "on_chartType_currentIndexChanged"
QT_MOC_LITERAL(11, 195, 12), // "on_x_clicked"
QT_MOC_LITERAL(12, 208, 12), // "on_y_clicked"
QT_MOC_LITERAL(13, 221, 12), // "on_z_clicked"
QT_MOC_LITERAL(14, 234, 27), // "on_axis_currentIndexChanged"
QT_MOC_LITERAL(15, 262, 5), // "index"
QT_MOC_LITERAL(16, 268, 15), // "on_time_clicked"
QT_MOC_LITERAL(17, 284, 19), // "on_showGrid_clicked"
QT_MOC_LITERAL(18, 304, 16), // "on_clear_clicked"
QT_MOC_LITERAL(19, 321, 22) // "on_other_returnPressed"

    },
    "Chart\0plotPickerSelected\0\0pos\0"
    "on_fixedUpdate_clicked\0on_fixedScale_clicked\0"
    "on_autoScale_clicked\0on_xValue_textChanged\0"
    "on_yValue_textChanged\0on_zValue_textChanged\0"
    "on_chartType_currentIndexChanged\0"
    "on_x_clicked\0on_y_clicked\0on_z_clicked\0"
    "on_axis_currentIndexChanged\0index\0"
    "on_time_clicked\0on_showGrid_clicked\0"
    "on_clear_clicked\0on_other_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Chart[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       4,    0,   97,    2, 0x0a /* Public */,
       5,    0,   98,    2, 0x0a /* Public */,
       6,    0,   99,    2, 0x0a /* Public */,
       7,    1,  100,    2, 0x0a /* Public */,
       8,    1,  103,    2, 0x0a /* Public */,
       9,    1,  106,    2, 0x0a /* Public */,
      10,    1,  109,    2, 0x0a /* Public */,
      11,    0,  112,    2, 0x08 /* Private */,
      12,    0,  113,    2, 0x08 /* Private */,
      13,    0,  114,    2, 0x08 /* Private */,
      14,    1,  115,    2, 0x08 /* Private */,
      16,    0,  118,    2, 0x08 /* Private */,
      17,    0,  119,    2, 0x08 /* Private */,
      18,    0,  120,    2, 0x08 /* Private */,
      19,    0,  121,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Chart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Chart *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->plotPickerSelected((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->on_fixedUpdate_clicked(); break;
        case 2: _t->on_fixedScale_clicked(); break;
        case 3: _t->on_autoScale_clicked(); break;
        case 4: _t->on_xValue_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_yValue_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_zValue_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->on_chartType_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->on_x_clicked(); break;
        case 9: _t->on_y_clicked(); break;
        case 10: _t->on_z_clicked(); break;
        case 11: _t->on_axis_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_time_clicked(); break;
        case 13: _t->on_showGrid_clicked(); break;
        case 14: _t->on_clear_clicked(); break;
        case 15: _t->on_other_returnPressed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Chart::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Chart.data,
    qt_meta_data_Chart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Chart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Chart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Chart.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Chart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
