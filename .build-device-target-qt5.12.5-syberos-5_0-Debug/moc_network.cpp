/****************************************************************************
** Meta object code from reading C++ file 'network.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../platforms/syberos/syberh-plugins/network/network.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'network.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Network_t {
    QByteArrayData data[5];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Network_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Network_t qt_meta_stringdata_Network = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Network"
QT_MOC_LITERAL(1, 8, 8), // "finished"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 33, 5) // "reply"

    },
    "Network\0finished\0\0QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Network[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Network::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Network *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Network::staticMetaObject = { {
    &ExtensionSystem::IPlugin::staticMetaObject,
    qt_meta_stringdata_Network.data,
    qt_meta_data_Network,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Network::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Network::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Network.stringdata0))
        return static_cast<void*>(this);
    return ExtensionSystem::IPlugin::qt_metacast(_clname);
}

int Network::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionSystem::IPlugin::qt_metacall(_c, _id, _a);
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

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x1f,  'c',  'o',  'm',  '.',  's', 
    'y',  'b',  'e',  'r',  'o',  's',  '.',  's', 
    'y',  'b',  'e',  'r',  'h',  '.',  'S',  'y', 
    'b',  'e',  'r',  'h',  'P',  'l',  'u',  'g', 
    'i',  'n', 
    // "className"
    0x03,  0x67,  'N',  'e',  't',  'w',  'o',  'r', 
    'k', 
    // "MetaData"
    0x04,  0xa8,  0x6d,  'C',  'o',  'm',  'p',  'a', 
    't',  'V',  'e',  'r',  's',  'i',  'o',  'n', 
    0x63,  '5',  '.',  '3',  0x69,  'C',  'o',  'p', 
    'y',  'r',  'i',  'g',  'h',  't',  0x78,  0x19, 
    '(',  'C',  ')',  ' ',  '2',  '0',  '1',  '4', 
    '-',  '2',  '0',  '2',  '0',  ' ',  's',  'y', 
    'b',  'e',  'r',  'o',  's',  '.',  'c',  'o', 
    'm',  0x6c,  'D',  'e',  'p',  'e',  'n',  'd', 
    'e',  'n',  'c',  'i',  'e',  's',  0x80,  0x6b, 
    'D',  'e',  's',  'c',  'r',  'i',  'p',  't', 
    'i',  'o',  'n',  0x60,  0x67,  'L',  'i',  'c', 
    'e',  'n',  's',  'e',  0x60,  0x64,  'N',  'a', 
    'm',  'e',  0x67,  'N',  'e',  't',  'w',  'o', 
    'r',  'k',  0x63,  'U',  'r',  'l',  0x78,  0x1a, 
    'h',  't',  't',  'p',  's',  ':',  '/',  '/', 
    's',  'y',  'b',  'e',  'r',  'h',  '.',  's', 
    'y',  'b',  'e',  'r',  'o',  's',  '.',  'c', 
    'o',  'm',  0x67,  'V',  'e',  'r',  's',  'i', 
    'o',  'n',  0x65,  '1',  '.',  '0',  '.',  '0', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(Network, Network)

QT_WARNING_POP
QT_END_MOC_NAMESPACE