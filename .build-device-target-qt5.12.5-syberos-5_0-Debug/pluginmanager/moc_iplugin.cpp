/****************************************************************************
** Meta object code from reading C++ file 'iplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../platforms/syberos/pluginmanager/src/iplugin/iplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExtensionSystem__IPlugin_t {
    QByteArrayData data[3];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtensionSystem__IPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtensionSystem__IPlugin_t qt_meta_stringdata_ExtensionSystem__IPlugin = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ExtensionSystem::IPlugin"
QT_MOC_LITERAL(1, 25, 28), // "asynchronousShutdownFinished"
QT_MOC_LITERAL(2, 54, 0) // ""

    },
    "ExtensionSystem::IPlugin\0"
    "asynchronousShutdownFinished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtensionSystem__IPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ExtensionSystem::IPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->asynchronousShutdownFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IPlugin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IPlugin::asynchronousShutdownFinished)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ExtensionSystem::IPlugin::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ExtensionSystem__IPlugin.data,
    qt_meta_data_ExtensionSystem__IPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExtensionSystem::IPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtensionSystem::IPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionSystem__IPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ExtensionSystem::IPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ExtensionSystem::IPlugin::asynchronousShutdownFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ExtensionSystem__SignalManager_t {
    QByteArrayData data[13];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtensionSystem__SignalManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtensionSystem__SignalManager_t qt_meta_stringdata_ExtensionSystem__SignalManager = {
    {
QT_MOC_LITERAL(0, 0, 30), // "ExtensionSystem::SignalManager"
QT_MOC_LITERAL(1, 31, 7), // "success"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 10), // "callbackID"
QT_MOC_LITERAL(4, 51, 6), // "result"
QT_MOC_LITERAL(5, 58, 6), // "failed"
QT_MOC_LITERAL(6, 65, 9), // "errorCode"
QT_MOC_LITERAL(7, 75, 8), // "errorMsg"
QT_MOC_LITERAL(8, 84, 8), // "progress"
QT_MOC_LITERAL(9, 93, 11), // "totalLength"
QT_MOC_LITERAL(10, 105, 6), // "status"
QT_MOC_LITERAL(11, 112, 9), // "subscribe"
QT_MOC_LITERAL(12, 122, 10) // "handleName"

    },
    "ExtensionSystem::SignalManager\0success\0"
    "\0callbackID\0result\0failed\0errorCode\0"
    "errorMsg\0progress\0totalLength\0status\0"
    "subscribe\0handleName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtensionSystem__SignalManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    3,   39,    2, 0x06 /* Public */,
       8,    4,   46,    2, 0x06 /* Public */,
      11,    2,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Long, QMetaType::QVariant,    3,    4,
    QMetaType::Void, QMetaType::Long, QMetaType::Long, QMetaType::QString,    3,    6,    7,
    QMetaType::Void, QMetaType::Long, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    9,    8,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   12,    4,

       0        // eod
};

void ExtensionSystem::SignalManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SignalManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 1: _t->failed((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->progress((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 3: _t->subscribe((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SignalManager::*)(long , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalManager::success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SignalManager::*)(long , long , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalManager::failed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SignalManager::*)(long , const int , const int , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalManager::progress)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SignalManager::*)(QString , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalManager::subscribe)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ExtensionSystem::SignalManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ExtensionSystem__SignalManager.data,
    qt_meta_data_ExtensionSystem__SignalManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExtensionSystem::SignalManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtensionSystem::SignalManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionSystem__SignalManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ExtensionSystem::SignalManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ExtensionSystem::SignalManager::success(long _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ExtensionSystem::SignalManager::failed(long _t1, long _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ExtensionSystem::SignalManager::progress(long _t1, const int _t2, const int _t3, const int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ExtensionSystem::SignalManager::subscribe(QString _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE