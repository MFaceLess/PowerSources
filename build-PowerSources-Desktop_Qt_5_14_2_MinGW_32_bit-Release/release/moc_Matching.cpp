/****************************************************************************
** Meta object code from reading C++ file 'Matching.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PowerSources/Matching/Matching.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Matching.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Matching_t {
    QByteArrayData data[8];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Matching_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Matching_t qt_meta_stringdata_Matching = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Matching"
QT_MOC_LITERAL(1, 9, 31), // "on_PushButton_Calculate_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 36), // "on_ComboBox_Type_currentIndex..."
QT_MOC_LITERAL(4, 79, 5), // "index"
QT_MOC_LITERAL(5, 85, 36), // "on_ComboBox_View_currentIndex..."
QT_MOC_LITERAL(6, 122, 29), // "on_Alignment_CheckBox_clicked"
QT_MOC_LITERAL(7, 152, 7) // "checked"

    },
    "Matching\0on_PushButton_Calculate_clicked\0"
    "\0on_ComboBox_Type_currentIndexChanged\0"
    "index\0on_ComboBox_View_currentIndexChanged\0"
    "on_Alignment_CheckBox_clicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Matching[] = {

 // content:
       8,       // revision
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
       3,    1,   35,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       6,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void Matching::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Matching *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_PushButton_Calculate_clicked(); break;
        case 1: _t->on_ComboBox_Type_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_ComboBox_View_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_Alignment_CheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Matching::staticMetaObject = { {
    QMetaObject::SuperData::link<MainpowerSourcesAbstract::staticMetaObject>(),
    qt_meta_stringdata_Matching.data,
    qt_meta_data_Matching,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Matching::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Matching::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Matching.stringdata0))
        return static_cast<void*>(this);
    return MainpowerSourcesAbstract::qt_metacast(_clname);
}

int Matching::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainpowerSourcesAbstract::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
