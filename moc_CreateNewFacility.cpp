/****************************************************************************
** Meta object code from reading C++ file 'CreateNewFacility.h'
**
** Created: Sat Apr 2 19:02:25 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CreateNewFacility.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CreateNewFacility.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CreateNewFacility[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CreateNewFacility[] = {
    "CreateNewFacility\0\0okBtn_Clicked()\0"
};

const QMetaObject CreateNewFacility::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CreateNewFacility,
      qt_meta_data_CreateNewFacility, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CreateNewFacility::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CreateNewFacility::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CreateNewFacility::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CreateNewFacility))
        return static_cast<void*>(const_cast< CreateNewFacility*>(this));
    return QWidget::qt_metacast(_clname);
}

int CreateNewFacility::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: okBtn_Clicked(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
