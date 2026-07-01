/****************************************************************************
** Meta object code from reading C++ file 'imageprocessing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "view/imageprocessing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageprocessing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageProcessing_t {
    QByteArrayData data[17];
    char stringdata0[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageProcessing_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageProcessing_t qt_meta_stringdata_ImageProcessing = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ImageProcessing"
QT_MOC_LITERAL(1, 16, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "on_defaultColor_clicked"
QT_MOC_LITERAL(4, 65, 20), // "on_fromColor_clicked"
QT_MOC_LITERAL(5, 86, 18), // "on_toColor_clicked"
QT_MOC_LITERAL(6, 105, 14), // "on_add_clicked"
QT_MOC_LITERAL(7, 120, 17), // "on_colors_clicked"
QT_MOC_LITERAL(8, 138, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 150, 5), // "index"
QT_MOC_LITERAL(10, 156, 17), // "on_remove_clicked"
QT_MOC_LITERAL(11, 174, 28), // "on_actionOnly_Left_triggered"
QT_MOC_LITERAL(12, 203, 29), // "on_actionOnly_Right_triggered"
QT_MOC_LITERAL(13, 233, 22), // "on_actionAll_triggered"
QT_MOC_LITERAL(14, 256, 26), // "on_tolerance_returnPressed"
QT_MOC_LITERAL(15, 283, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(16, 307, 24) // "on_average_returnPressed"

    },
    "ImageProcessing\0on_actionOpen_triggered\0"
    "\0on_defaultColor_clicked\0on_fromColor_clicked\0"
    "on_toColor_clicked\0on_add_clicked\0"
    "on_colors_clicked\0QModelIndex\0index\0"
    "on_remove_clicked\0on_actionOnly_Left_triggered\0"
    "on_actionOnly_Right_triggered\0"
    "on_actionAll_triggered\0"
    "on_tolerance_returnPressed\0"
    "on_actionSave_triggered\0"
    "on_average_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageProcessing[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    1,   84,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,
      15,    0,   92,    2, 0x08 /* Private */,
      16,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ImageProcessing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageProcessing *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionOpen_triggered(); break;
        case 1: _t->on_defaultColor_clicked(); break;
        case 2: _t->on_fromColor_clicked(); break;
        case 3: _t->on_toColor_clicked(); break;
        case 4: _t->on_add_clicked(); break;
        case 5: _t->on_colors_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_remove_clicked(); break;
        case 7: _t->on_actionOnly_Left_triggered(); break;
        case 8: _t->on_actionOnly_Right_triggered(); break;
        case 9: _t->on_actionAll_triggered(); break;
        case 10: _t->on_tolerance_returnPressed(); break;
        case 11: _t->on_actionSave_triggered(); break;
        case 12: _t->on_average_returnPressed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ImageProcessing::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ImageProcessing.data,
    qt_meta_data_ImageProcessing,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageProcessing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageProcessing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageProcessing.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ImageProcessing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
