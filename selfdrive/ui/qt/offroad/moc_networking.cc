/****************************************************************************
** Meta object code from reading C++ file 'networking.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "networking.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networking.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WifiUI_t {
    QByteArrayData data[13];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WifiUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WifiUI_t qt_meta_stringdata_WifiUI = {
    {
QT_MOC_LITERAL(0, 0, 6), // "WifiUI"
QT_MOC_LITERAL(1, 7, 12), // "openKeyboard"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "closeKeyboard"
QT_MOC_LITERAL(4, 35, 16), // "connectToNetwork"
QT_MOC_LITERAL(5, 52, 7), // "Network"
QT_MOC_LITERAL(6, 60, 1), // "n"
QT_MOC_LITERAL(7, 62, 12), // "handleButton"
QT_MOC_LITERAL(8, 75, 16), // "QAbstractButton*"
QT_MOC_LITERAL(9, 92, 8), // "m_button"
QT_MOC_LITERAL(10, 101, 7), // "refresh"
QT_MOC_LITERAL(11, 109, 8), // "prevPage"
QT_MOC_LITERAL(12, 118, 8) // "nextPage"

    },
    "WifiUI\0openKeyboard\0\0closeKeyboard\0"
    "connectToNetwork\0Network\0n\0handleButton\0"
    "QAbstractButton*\0m_button\0refresh\0"
    "prevPage\0nextPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WifiUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   54,    2, 0x0a /* Public */,
      10,    0,   57,    2, 0x0a /* Public */,
      11,    0,   58,    2, 0x0a /* Public */,
      12,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WifiUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WifiUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openKeyboard(); break;
        case 1: _t->closeKeyboard(); break;
        case 2: _t->connectToNetwork((*reinterpret_cast< Network(*)>(_a[1]))); break;
        case 3: _t->handleButton((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 4: _t->refresh(); break;
        case 5: _t->prevPage(); break;
        case 6: _t->nextPage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WifiUI::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WifiUI::openKeyboard)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WifiUI::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WifiUI::closeKeyboard)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WifiUI::*)(Network );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WifiUI::connectToNetwork)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WifiUI::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_WifiUI.data,
    qt_meta_data_WifiUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WifiUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WifiUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WifiUI.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WifiUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void WifiUI::openKeyboard()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WifiUI::closeKeyboard()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WifiUI::connectToNetwork(Network _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_AdvancedNetworking_t {
    QByteArrayData data[7];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdvancedNetworking_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdvancedNetworking_t qt_meta_stringdata_AdvancedNetworking = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AdvancedNetworking"
QT_MOC_LITERAL(1, 19, 9), // "backPress"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "toggleTethering"
QT_MOC_LITERAL(4, 46, 6), // "enable"
QT_MOC_LITERAL(5, 53, 9), // "toggleSSH"
QT_MOC_LITERAL(6, 63, 7) // "refresh"

    },
    "AdvancedNetworking\0backPress\0\0"
    "toggleTethering\0enable\0toggleSSH\0"
    "refresh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdvancedNetworking[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       6,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

       0        // eod
};

void AdvancedNetworking::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdvancedNetworking *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backPress(); break;
        case 1: _t->toggleTethering((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->toggleSSH((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->refresh(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdvancedNetworking::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdvancedNetworking::backPress)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdvancedNetworking::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_AdvancedNetworking.data,
    qt_meta_data_AdvancedNetworking,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdvancedNetworking::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdvancedNetworking::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdvancedNetworking.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AdvancedNetworking::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AdvancedNetworking::backPress()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Networking_t {
    QByteArrayData data[8];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Networking_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Networking_t qt_meta_stringdata_Networking = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Networking"
QT_MOC_LITERAL(1, 11, 16), // "connectToNetwork"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "Network"
QT_MOC_LITERAL(4, 37, 1), // "n"
QT_MOC_LITERAL(5, 39, 7), // "refresh"
QT_MOC_LITERAL(6, 47, 13), // "wrongPassword"
QT_MOC_LITERAL(7, 61, 4) // "ssid"

    },
    "Networking\0connectToNetwork\0\0Network\0"
    "n\0refresh\0wrongPassword\0ssid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Networking[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    0,   32,    2, 0x08 /* Private */,
       6,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void Networking::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Networking *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectToNetwork((*reinterpret_cast< Network(*)>(_a[1]))); break;
        case 1: _t->refresh(); break;
        case 2: _t->wrongPassword((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Networking::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Networking.data,
    qt_meta_data_Networking,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Networking::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Networking::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Networking.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Networking::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
