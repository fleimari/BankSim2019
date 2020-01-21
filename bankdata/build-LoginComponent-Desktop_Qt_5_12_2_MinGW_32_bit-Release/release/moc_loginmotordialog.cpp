/****************************************************************************
** Meta object code from reading C++ file 'loginmotordialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../LoginComponent/loginmotordialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginmotordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginMotorDialog_t {
    QByteArrayData data[20];
    char stringdata0[436];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginMotorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginMotorDialog_t qt_meta_stringdata_LoginMotorDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LoginMotorDialog"
QT_MOC_LITERAL(1, 17, 17), // "signalLoginStatus"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "loginStatus"
QT_MOC_LITERAL(4, 48, 19), // "signalCancelSession"
QT_MOC_LITERAL(5, 68, 22), // "on_buttonLogin_clicked"
QT_MOC_LITERAL(6, 91, 24), // "on_buttonNumpad1_clicked"
QT_MOC_LITERAL(7, 116, 24), // "on_buttonNumpad2_clicked"
QT_MOC_LITERAL(8, 141, 24), // "on_buttonNumpad3_clicked"
QT_MOC_LITERAL(9, 166, 24), // "on_buttonNumpad4_clicked"
QT_MOC_LITERAL(10, 191, 24), // "on_buttonNumpad5_clicked"
QT_MOC_LITERAL(11, 216, 24), // "on_buttonNumpad6_clicked"
QT_MOC_LITERAL(12, 241, 24), // "on_buttonNumpad7_clicked"
QT_MOC_LITERAL(13, 266, 24), // "on_buttonNumpad8_clicked"
QT_MOC_LITERAL(14, 291, 24), // "on_buttonNumpad9_clicked"
QT_MOC_LITERAL(15, 316, 24), // "on_buttonNumpad0_clicked"
QT_MOC_LITERAL(16, 341, 28), // "on_buttonNumpadClear_clicked"
QT_MOC_LITERAL(17, 370, 28), // "on_buttonCancelLogin_clicked"
QT_MOC_LITERAL(18, 399, 18), // "updateTimeoutTimer"
QT_MOC_LITERAL(19, 418, 17) // "startTimeoutTimer"

    },
    "LoginMotorDialog\0signalLoginStatus\0\0"
    "loginStatus\0signalCancelSession\0"
    "on_buttonLogin_clicked\0on_buttonNumpad1_clicked\0"
    "on_buttonNumpad2_clicked\0"
    "on_buttonNumpad3_clicked\0"
    "on_buttonNumpad4_clicked\0"
    "on_buttonNumpad5_clicked\0"
    "on_buttonNumpad6_clicked\0"
    "on_buttonNumpad7_clicked\0"
    "on_buttonNumpad8_clicked\0"
    "on_buttonNumpad9_clicked\0"
    "on_buttonNumpad0_clicked\0"
    "on_buttonNumpadClear_clicked\0"
    "on_buttonCancelLogin_clicked\0"
    "updateTimeoutTimer\0startTimeoutTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginMotorDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    0,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  103,    2, 0x08 /* Private */,
       6,    0,  104,    2, 0x08 /* Private */,
       7,    0,  105,    2, 0x08 /* Private */,
       8,    0,  106,    2, 0x08 /* Private */,
       9,    0,  107,    2, 0x08 /* Private */,
      10,    0,  108,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    0,  110,    2, 0x08 /* Private */,
      13,    0,  111,    2, 0x08 /* Private */,
      14,    0,  112,    2, 0x08 /* Private */,
      15,    0,  113,    2, 0x08 /* Private */,
      16,    0,  114,    2, 0x08 /* Private */,
      17,    0,  115,    2, 0x08 /* Private */,
      18,    0,  116,    2, 0x08 /* Private */,
      19,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginMotorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginMotorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalLoginStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->signalCancelSession(); break;
        case 2: _t->on_buttonLogin_clicked(); break;
        case 3: _t->on_buttonNumpad1_clicked(); break;
        case 4: _t->on_buttonNumpad2_clicked(); break;
        case 5: _t->on_buttonNumpad3_clicked(); break;
        case 6: _t->on_buttonNumpad4_clicked(); break;
        case 7: _t->on_buttonNumpad5_clicked(); break;
        case 8: _t->on_buttonNumpad6_clicked(); break;
        case 9: _t->on_buttonNumpad7_clicked(); break;
        case 10: _t->on_buttonNumpad8_clicked(); break;
        case 11: _t->on_buttonNumpad9_clicked(); break;
        case 12: _t->on_buttonNumpad0_clicked(); break;
        case 13: _t->on_buttonNumpadClear_clicked(); break;
        case 14: _t->on_buttonCancelLogin_clicked(); break;
        case 15: _t->updateTimeoutTimer(); break;
        case 16: _t->startTimeoutTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoginMotorDialog::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginMotorDialog::signalLoginStatus)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoginMotorDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginMotorDialog::signalCancelSession)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LoginMotorDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_LoginMotorDialog.data,
    qt_meta_data_LoginMotorDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoginMotorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginMotorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginMotorDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LoginMotorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void LoginMotorDialog::signalLoginStatus(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LoginMotorDialog::signalCancelSession()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
