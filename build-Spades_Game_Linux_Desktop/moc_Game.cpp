/****************************************************************************
** Meta object code from reading C++ file 'Game.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Spades_Game/Game.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Game.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Game_t {
    QByteArrayData data[14];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Game_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Game_t qt_meta_stringdata_Game = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Game"
QT_MOC_LITERAL(1, 5, 8), // "sendHand"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 15), // "vector<string>&"
QT_MOC_LITERAL(4, 31, 1), // "s"
QT_MOC_LITERAL(5, 33, 9), // "printText"
QT_MOC_LITERAL(6, 43, 6), // "string"
QT_MOC_LITERAL(7, 50, 10), // "getUserBid"
QT_MOC_LITERAL(8, 61, 11), // "putOpp1Card"
QT_MOC_LITERAL(9, 73, 11), // "putOpp2Card"
QT_MOC_LITERAL(10, 85, 9), // "putTMCard"
QT_MOC_LITERAL(11, 95, 13), // "putPlayerCard"
QT_MOC_LITERAL(12, 109, 7), // "endGame"
QT_MOC_LITERAL(13, 117, 1) // "i"

    },
    "Game\0sendHand\0\0vector<string>&\0s\0"
    "printText\0string\0getUserBid\0putOpp1Card\0"
    "putOpp2Card\0putTMCard\0putPlayerCard\0"
    "endGame\0i"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Game[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       7,    0,   60,    2, 0x06 /* Public */,
       8,    1,   61,    2, 0x06 /* Public */,
       9,    1,   64,    2, 0x06 /* Public */,
      10,    1,   67,    2, 0x06 /* Public */,
      11,    1,   70,    2, 0x06 /* Public */,
      12,    1,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Game *_t = static_cast<Game *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendHand((*reinterpret_cast< vector<string>(*)>(_a[1]))); break;
        case 1: _t->printText((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 2: _t->getUserBid(); break;
        case 3: _t->putOpp1Card((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 4: _t->putOpp2Card((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 5: _t->putTMCard((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 6: _t->putPlayerCard((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 7: _t->endGame((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Game::*_t)(vector<string> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::sendHand)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Game::*_t)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::printText)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Game::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::getUserBid)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Game::*_t)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::putOpp1Card)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Game::*_t)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::putOpp2Card)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Game::*_t)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::putTMCard)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Game::*_t)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::putPlayerCard)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Game::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::endGame)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Game::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Game.data,
      qt_meta_data_Game,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Game::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Game.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Game::sendHand(vector<string> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Game::printText(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Game::getUserBid()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Game::putOpp1Card(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Game::putOpp2Card(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Game::putTMCard(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Game::putPlayerCard(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Game::endGame(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
