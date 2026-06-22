/****************************************************************************
** Meta object code from reading C++ file 'colors.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "view/colors.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Colors_t {
    QByteArrayData data[11];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Colors_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Colors_t qt_meta_stringdata_Colors = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Colors"
QT_MOC_LITERAL(1, 7, 18), // "on_x_returnPressed"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "on_y_returnPressed"
QT_MOC_LITERAL(4, 46, 22), // "on_width_returnPressed"
QT_MOC_LITERAL(5, 69, 23), // "on_height_returnPressed"
QT_MOC_LITERAL(6, 93, 25), // "on_captionX_returnPressed"
QT_MOC_LITERAL(7, 119, 25), // "on_captionY_returnPressed"
QT_MOC_LITERAL(8, 145, 26), // "on_captionPt_returnPressed"
QT_MOC_LITERAL(9, 172, 33), // "on_colorStyle_currentIndexCha..."
QT_MOC_LITERAL(10, 206, 5) // "index"

    },
    "Colors\0on_x_returnPressed\0\0"
    "on_y_returnPressed\0on_width_returnPressed\0"
    "on_height_returnPressed\0"
    "on_captionX_returnPressed\0"
    "on_captionY_returnPressed\0"
    "on_captionPt_returnPressed\0"
    "on_colorStyle_currentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Colors[] = {

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
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void Colors::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Colors *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_x_returnPressed(); break;
        case 1: _t->on_y_returnPressed(); break;
        case 2: _t->on_width_returnPressed(); break;
        case 3: _t->on_height_returnPressed(); break;
        case 4: _t->on_captionX_returnPressed(); break;
        case 5: _t->on_captionY_returnPressed(); break;
        case 6: _t->on_captionPt_returnPressed(); break;
        case 7: _t->on_colorStyle_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Colors::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Colors.data,
    qt_meta_data_Colors,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Colors::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Colors::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Colors.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Colors::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
