/****************************************************************************
** Meta object code from reading C++ file 'charity.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../charity.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'charity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Charity_t {
    QByteArrayData data[17];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Charity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Charity_t qt_meta_stringdata_Charity = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Charity"
QT_MOC_LITERAL(1, 8, 12), // "signalLogout"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 16), // "signalReturnMenu"
QT_MOC_LITERAL(4, 39, 13), // "signalTimeout"
QT_MOC_LITERAL(5, 53, 22), // "signalOpenThankYouCard"
QT_MOC_LITERAL(6, 76, 12), // "donateTarget"
QT_MOC_LITERAL(7, 89, 12), // "donateAmount"
QT_MOC_LITERAL(8, 102, 23), // "on_buttonLogout_clicked"
QT_MOC_LITERAL(9, 126, 27), // "on_buttonReturnMenu_clicked"
QT_MOC_LITERAL(10, 154, 27), // "on_tableViewCharity_clicked"
QT_MOC_LITERAL(11, 182, 11), // "QModelIndex"
QT_MOC_LITERAL(12, 194, 5), // "index"
QT_MOC_LITERAL(13, 200, 31), // "on_buttonDonateComplete_clicked"
QT_MOC_LITERAL(14, 232, 24), // "on_buttonDonate5_clicked"
QT_MOC_LITERAL(15, 257, 25), // "on_buttonDonate10_clicked"
QT_MOC_LITERAL(16, 283, 25) // "on_buttonDonate20_clicked"

    },
    "Charity\0signalLogout\0\0signalReturnMenu\0"
    "signalTimeout\0signalOpenThankYouCard\0"
    "donateTarget\0donateAmount\0"
    "on_buttonLogout_clicked\0"
    "on_buttonReturnMenu_clicked\0"
    "on_tableViewCharity_clicked\0QModelIndex\0"
    "index\0on_buttonDonateComplete_clicked\0"
    "on_buttonDonate5_clicked\0"
    "on_buttonDonate10_clicked\0"
    "on_buttonDonate20_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Charity[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    2,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    1,   79,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    0,   83,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Charity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Charity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalLogout(); break;
        case 1: _t->signalReturnMenu(); break;
        case 2: _t->signalTimeout(); break;
        case 3: _t->signalOpenThankYouCard((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->on_buttonLogout_clicked(); break;
        case 5: _t->on_buttonReturnMenu_clicked(); break;
        case 6: _t->on_tableViewCharity_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_buttonDonateComplete_clicked(); break;
        case 8: _t->on_buttonDonate5_clicked(); break;
        case 9: _t->on_buttonDonate10_clicked(); break;
        case 10: _t->on_buttonDonate20_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Charity::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Charity::signalLogout)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Charity::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Charity::signalReturnMenu)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Charity::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Charity::signalTimeout)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Charity::*)(QString , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Charity::signalOpenThankYouCard)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Charity::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Charity.data,
    qt_meta_data_Charity,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Charity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Charity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Charity.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Charity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Charity::signalLogout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Charity::signalReturnMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Charity::signalTimeout()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Charity::signalOpenThankYouCard(QString _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
