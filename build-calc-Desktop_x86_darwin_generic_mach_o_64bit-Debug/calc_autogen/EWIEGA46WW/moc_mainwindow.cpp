/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../calc/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[46];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 14), // "digits_numbers"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 8), // "clearAll"
QT_MOC_LITERAL(36, 10), // "deleteChar"
QT_MOC_LITERAL(47, 12), // "calculateSin"
QT_MOC_LITERAL(60, 12), // "calculateCos"
QT_MOC_LITERAL(73, 12), // "calculateTan"
QT_MOC_LITERAL(86, 13), // "calculateAcos"
QT_MOC_LITERAL(100, 13), // "calculateAsin"
QT_MOC_LITERAL(114, 13), // "calculateAtan"
QT_MOC_LITERAL(128, 13), // "calculateSqrt"
QT_MOC_LITERAL(142, 11), // "calculateLn"
QT_MOC_LITERAL(154, 12), // "calculatePow"
QT_MOC_LITERAL(167, 12), // "calculateMod"
QT_MOC_LITERAL(180, 12), // "calculateLog"
QT_MOC_LITERAL(193, 9), // "printPlus"
QT_MOC_LITERAL(203, 10), // "printMinus"
QT_MOC_LITERAL(214, 8), // "printMul"
QT_MOC_LITERAL(223, 11), // "printDivide"
QT_MOC_LITERAL(235, 8), // "printDot"
QT_MOC_LITERAL(244, 11), // "printLeftBr"
QT_MOC_LITERAL(256, 12) // "printRightBr"

    },
    "MainWindow\0digits_numbers\0\0clearAll\0"
    "deleteChar\0calculateSin\0calculateCos\0"
    "calculateTan\0calculateAcos\0calculateAsin\0"
    "calculateAtan\0calculateSqrt\0calculateLn\0"
    "calculatePow\0calculateMod\0calculateLog\0"
    "printPlus\0printMinus\0printMul\0printDivide\0"
    "printDot\0printLeftBr\0printRightBr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  140,    2, 0x08,    1 /* Private */,
       3,    0,  141,    2, 0x08,    2 /* Private */,
       4,    0,  142,    2, 0x08,    3 /* Private */,
       5,    0,  143,    2, 0x08,    4 /* Private */,
       6,    0,  144,    2, 0x08,    5 /* Private */,
       7,    0,  145,    2, 0x08,    6 /* Private */,
       8,    0,  146,    2, 0x08,    7 /* Private */,
       9,    0,  147,    2, 0x08,    8 /* Private */,
      10,    0,  148,    2, 0x08,    9 /* Private */,
      11,    0,  149,    2, 0x08,   10 /* Private */,
      12,    0,  150,    2, 0x08,   11 /* Private */,
      13,    0,  151,    2, 0x08,   12 /* Private */,
      14,    0,  152,    2, 0x08,   13 /* Private */,
      15,    0,  153,    2, 0x08,   14 /* Private */,
      16,    0,  154,    2, 0x08,   15 /* Private */,
      17,    0,  155,    2, 0x08,   16 /* Private */,
      18,    0,  156,    2, 0x08,   17 /* Private */,
      19,    0,  157,    2, 0x08,   18 /* Private */,
      20,    0,  158,    2, 0x08,   19 /* Private */,
      21,    0,  159,    2, 0x08,   20 /* Private */,
      22,    0,  160,    2, 0x08,   21 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->digits_numbers(); break;
        case 1: _t->clearAll(); break;
        case 2: _t->deleteChar(); break;
        case 3: _t->calculateSin(); break;
        case 4: _t->calculateCos(); break;
        case 5: _t->calculateTan(); break;
        case 6: _t->calculateAcos(); break;
        case 7: _t->calculateAsin(); break;
        case 8: _t->calculateAtan(); break;
        case 9: _t->calculateSqrt(); break;
        case 10: _t->calculateLn(); break;
        case 11: _t->calculatePow(); break;
        case 12: _t->calculateMod(); break;
        case 13: _t->calculateLog(); break;
        case 14: _t->printPlus(); break;
        case 15: _t->printMinus(); break;
        case 16: _t->printMul(); break;
        case 17: _t->printDivide(); break;
        case 18: _t->printDot(); break;
        case 19: _t->printLeftBr(); break;
        case 20: _t->printRightBr(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
