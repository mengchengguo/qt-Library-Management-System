/****************************************************************************
** Meta object code from reading C++ file 'logblogdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Src/logblogdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logblogdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LogBlogDialog_t {
    QByteArrayData data[7];
    char stringdata[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogBlogDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogBlogDialog_t qt_meta_stringdata_LogBlogDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LogBlogDialog"
QT_MOC_LITERAL(1, 14, 20), // "on_btnSelect_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 21), // "on_ckUserName_clicked"
QT_MOC_LITERAL(4, 58, 7), // "checked"
QT_MOC_LITERAL(5, 66, 20), // "on_btnDelete_clicked"
QT_MOC_LITERAL(6, 87, 19) // "on_btnExcel_clicked"

    },
    "LogBlogDialog\0on_btnSelect_clicked\0\0"
    "on_ckUserName_clicked\0checked\0"
    "on_btnDelete_clicked\0on_btnExcel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogBlogDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LogBlogDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogBlogDialog *_t = static_cast<LogBlogDialog *>(_o);
        switch (_id) {
        case 0: _t->on_btnSelect_clicked(); break;
        case 1: _t->on_ckUserName_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_btnDelete_clicked(); break;
        case 3: _t->on_btnExcel_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject LogBlogDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LogBlogDialog.data,
      qt_meta_data_LogBlogDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LogBlogDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogBlogDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LogBlogDialog.stringdata))
        return static_cast<void*>(const_cast< LogBlogDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LogBlogDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
