/****************************************************************************
** Meta object code from reading C++ file 'devdownload.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../platforms/syberos/nativesdk/src/framework/devtools/devdownload.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devdownload.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DevDownload_t {
    QByteArrayData data[18];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DevDownload_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DevDownload_t qt_meta_stringdata_DevDownload = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DevDownload"
QT_MOC_LITERAL(1, 12, 13), // "signalStarted"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "downloadId"
QT_MOC_LITERAL(4, 38, 4), // "path"
QT_MOC_LITERAL(5, 43, 21), // "signalDownloadProcess"
QT_MOC_LITERAL(6, 65, 13), // "bytesReceived"
QT_MOC_LITERAL(7, 79, 10), // "bytesTotal"
QT_MOC_LITERAL(8, 90, 19), // "signalReplyFinished"
QT_MOC_LITERAL(9, 110, 10), // "statusCode"
QT_MOC_LITERAL(10, 121, 5), // "error"
QT_MOC_LITERAL(11, 127, 19), // "signalDownloadError"
QT_MOC_LITERAL(12, 147, 18), // "onDownloadProgress"
QT_MOC_LITERAL(13, 166, 11), // "onReadyRead"
QT_MOC_LITERAL(14, 178, 10), // "onFinished"
QT_MOC_LITERAL(15, 189, 7), // "onError"
QT_MOC_LITERAL(16, 197, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(17, 225, 4) // "code"

    },
    "DevDownload\0signalStarted\0\0downloadId\0"
    "path\0signalDownloadProcess\0bytesReceived\0"
    "bytesTotal\0signalReplyFinished\0"
    "statusCode\0error\0signalDownloadError\0"
    "onDownloadProgress\0onReadyRead\0"
    "onFinished\0onError\0QNetworkReply::NetworkError\0"
    "code"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DevDownload[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    4,   59,    2, 0x06 /* Public */,
       8,    4,   68,    2, 0x06 /* Public */,
      11,    3,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    2,   84,    2, 0x0a /* Public */,
      13,    0,   89,    2, 0x0a /* Public */,
      14,    0,   90,    2, 0x0a /* Public */,
      15,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::LongLong, QMetaType::LongLong,    3,    4,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,    3,    4,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong, QMetaType::QString,    3,    9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void DevDownload::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DevDownload *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalStarted((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->signalDownloadProcess((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4]))); break;
        case 2: _t->signalReplyFinished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->signalDownloadError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->onDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->onReadyRead(); break;
        case 6: _t->onFinished(); break;
        case 7: _t->onError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DevDownload::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDownload::signalStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DevDownload::*)(QString , QString , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDownload::signalDownloadProcess)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DevDownload::*)(QString , QString , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDownload::signalReplyFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DevDownload::*)(QString , qint64 , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDownload::signalDownloadError)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DevDownload::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DevDownload.data,
    qt_meta_data_DevDownload,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DevDownload::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DevDownload::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DevDownload.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DevDownload::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DevDownload::signalStarted(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DevDownload::signalDownloadProcess(QString _t1, QString _t2, qint64 _t3, qint64 _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DevDownload::signalReplyFinished(QString _t1, QString _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DevDownload::signalDownloadError(QString _t1, qint64 _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE