/****************************************************************************
** Meta object code from reading C++ file 'withdrawal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../withdrawal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'withdrawal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Withdrawal_t {
    QByteArrayData data[19];
    char stringdata0[356];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Withdrawal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Withdrawal_t qt_meta_stringdata_Withdrawal = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Withdrawal"
QT_MOC_LITERAL(1, 11, 12), // "signalLogout"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 16), // "signalReturnMenu"
QT_MOC_LITERAL(4, 42, 18), // "signalOpenGetMoney"
QT_MOC_LITERAL(5, 61, 21), // "signalSendReceiptData"
QT_MOC_LITERAL(6, 83, 13), // "balanceBefore"
QT_MOC_LITERAL(7, 97, 10), // "withdrawal"
QT_MOC_LITERAL(8, 108, 12), // "balanceAfter"
QT_MOC_LITERAL(9, 121, 11), // "receiptDate"
QT_MOC_LITERAL(10, 133, 13), // "signalTimeout"
QT_MOC_LITERAL(11, 147, 23), // "on_buttonLogout_clicked"
QT_MOC_LITERAL(12, 171, 27), // "on_buttonReturnMenu_clicked"
QT_MOC_LITERAL(13, 199, 32), // "on_buttonClearWithdrawal_clicked"
QT_MOC_LITERAL(14, 232, 22), // "on_buttonAdd20_clicked"
QT_MOC_LITERAL(15, 255, 22), // "on_buttonAdd50_clicked"
QT_MOC_LITERAL(16, 278, 23), // "on_buttonAdd100_clicked"
QT_MOC_LITERAL(17, 302, 23), // "on_buttonAdd500_clicked"
QT_MOC_LITERAL(18, 326, 29) // "on_buttonDoWithdrawal_clicked"

    },
    "Withdrawal\0signalLogout\0\0signalReturnMenu\0"
    "signalOpenGetMoney\0signalSendReceiptData\0"
    "balanceBefore\0withdrawal\0balanceAfter\0"
    "receiptDate\0signalTimeout\0"
    "on_buttonLogout_clicked\0"
    "on_buttonReturnMenu_clicked\0"
    "on_buttonClearWithdrawal_clicked\0"
    "on_buttonAdd20_clicked\0on_buttonAdd50_clicked\0"
    "on_buttonAdd100_clicked\0on_buttonAdd500_clicked\0"
    "on_buttonDoWithdrawal_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Withdrawal[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    4,   82,    2, 0x06 /* Public */,
      10,    0,   91,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   92,    2, 0x08 /* Private */,
      12,    0,   93,    2, 0x08 /* Private */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,
      17,    0,   98,    2, 0x08 /* Private */,
      18,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::QString,    6,    7,    8,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Withdrawal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Withdrawal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalLogout(); break;
        case 1: _t->signalReturnMenu(); break;
        case 2: _t->signalOpenGetMoney(); break;
        case 3: _t->signalSendReceiptData((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 4: _t->signalTimeout(); break;
        case 5: _t->on_buttonLogout_clicked(); break;
        case 6: _t->on_buttonReturnMenu_clicked(); break;
        case 7: _t->on_buttonClearWithdrawal_clicked(); break;
        case 8: _t->on_buttonAdd20_clicked(); break;
        case 9: _t->on_buttonAdd50_clicked(); break;
        case 10: _t->on_buttonAdd100_clicked(); break;
        case 11: _t->on_buttonAdd500_clicked(); break;
        case 12: _t->on_buttonDoWithdrawal_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Withdrawal::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Withdrawal::signalLogout)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Withdrawal::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Withdrawal::signalReturnMenu)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Withdrawal::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Withdrawal::signalOpenGetMoney)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Withdrawal::*)(double , double , double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Withdrawal::signalSendReceiptData)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Withdrawal::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Withdrawal::signalTimeout)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Withdrawal::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Withdrawal.data,
    qt_meta_data_Withdrawal,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Withdrawal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Withdrawal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Withdrawal.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Withdrawal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Withdrawal::signalLogout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Withdrawal::signalReturnMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Withdrawal::signalOpenGetMoney()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Withdrawal::signalSendReceiptData(double _t1, double _t2, double _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Withdrawal::signalTimeout()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
