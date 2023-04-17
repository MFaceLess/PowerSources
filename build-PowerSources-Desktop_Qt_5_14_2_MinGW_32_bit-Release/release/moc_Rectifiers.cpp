/****************************************************************************
** Meta object code from reading C++ file 'Rectifiers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PowerSources/Rectifiers/Rectifiers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Rectifiers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Rectifiers_t {
    QByteArrayData data[23];
    char stringdata0[409];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Rectifiers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Rectifiers_t qt_meta_stringdata_Rectifiers = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Rectifiers"
QT_MOC_LITERAL(1, 11, 16), // "signal_diod_base"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 40), // "on_ComboBox_DevicesR_currentI..."
QT_MOC_LITERAL(4, 70, 5), // "index"
QT_MOC_LITERAL(5, 76, 39), // "on_ComboBox_OutPutF_currentIn..."
QT_MOC_LITERAL(6, 116, 31), // "on_PushButton_Calculate_clicked"
QT_MOC_LITERAL(7, 148, 16), // "CoordinateCursor"
QT_MOC_LITERAL(8, 165, 5), // "point"
QT_MOC_LITERAL(9, 171, 3), // "ind"
QT_MOC_LITERAL(10, 175, 33), // "on_PushButton_Interactive_cli..."
QT_MOC_LITERAL(11, 209, 7), // "checked"
QT_MOC_LITERAL(12, 217, 27), // "on_PushButton_Hands_clicked"
QT_MOC_LITERAL(13, 245, 31), // "on_DoubleSpinBoxOX_valueChanged"
QT_MOC_LITERAL(14, 277, 4), // "arg1"
QT_MOC_LITERAL(15, 282, 20), // "on_diod_base_clicked"
QT_MOC_LITERAL(16, 303, 16), // "diod_base_update"
QT_MOC_LITERAL(17, 320, 20), // "std::vector<QString>"
QT_MOC_LITERAL(18, 341, 15), // "_names_of_diods"
QT_MOC_LITERAL(19, 357, 16), // "std::vector<int>"
QT_MOC_LITERAL(20, 374, 9), // "_Uobr_max"
QT_MOC_LITERAL(21, 384, 19), // "std::vector<double>"
QT_MOC_LITERAL(22, 404, 4) // "_Ipr"

    },
    "Rectifiers\0signal_diod_base\0\0"
    "on_ComboBox_DevicesR_currentIndexChanged\0"
    "index\0on_ComboBox_OutPutF_currentIndexChanged\0"
    "on_PushButton_Calculate_clicked\0"
    "CoordinateCursor\0point\0ind\0"
    "on_PushButton_Interactive_clicked\0"
    "checked\0on_PushButton_Hands_clicked\0"
    "on_DoubleSpinBoxOX_valueChanged\0arg1\0"
    "on_diod_base_clicked\0diod_base_update\0"
    "std::vector<QString>\0_names_of_diods\0"
    "std::vector<int>\0_Uobr_max\0"
    "std::vector<double>\0_Ipr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Rectifiers[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   65,    2, 0x08 /* Private */,
       5,    1,   68,    2, 0x08 /* Private */,
       6,    0,   71,    2, 0x08 /* Private */,
       7,    2,   72,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      12,    1,   80,    2, 0x08 /* Private */,
      13,    1,   83,    2, 0x08 /* Private */,
      15,    0,   86,    2, 0x08 /* Private */,
      16,    3,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19, 0x80000000 | 21,   18,   20,   22,

       0        // eod
};

void Rectifiers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Rectifiers *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_diod_base(); break;
        case 1: _t->on_ComboBox_DevicesR_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_ComboBox_OutPutF_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_PushButton_Calculate_clicked(); break;
        case 4: _t->CoordinateCursor((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_PushButton_Interactive_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_PushButton_Hands_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_DoubleSpinBoxOX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->on_diod_base_clicked(); break;
        case 9: _t->diod_base_update((*reinterpret_cast< std::vector<QString>(*)>(_a[1])),(*reinterpret_cast< std::vector<int>(*)>(_a[2])),(*reinterpret_cast< std::vector<double>(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Rectifiers::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Rectifiers::signal_diod_base)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Rectifiers::staticMetaObject = { {
    QMetaObject::SuperData::link<MainpowerSourcesAbstract::staticMetaObject>(),
    qt_meta_stringdata_Rectifiers.data,
    qt_meta_data_Rectifiers,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Rectifiers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Rectifiers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Rectifiers.stringdata0))
        return static_cast<void*>(this);
    return MainpowerSourcesAbstract::qt_metacast(_clname);
}

int Rectifiers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainpowerSourcesAbstract::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Rectifiers::signal_diod_base()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
