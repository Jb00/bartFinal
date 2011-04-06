/****************************************************************************
** Meta object code from reading C++ file 'mapwindow.h'
**
** Created: Tue Apr 5 21:15:26 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mapwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MapWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      32,   10,   10,   10, 0x08,
      52,   10,   10,   10, 0x08,
      69,   10,   10,   10, 0x08,
      90,   10,   10,   10, 0x08,
     115,   10,   10,   10, 0x08,
     139,   10,   10,   10, 0x08,
     161,   10,   10,   10, 0x08,
     179,   10,   10,   10, 0x08,
     196,   10,   10,   10, 0x08,
     214,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MapWindow[] = {
    "MapWindow\0\0createUser_clicked()\0"
    "createFac_clicked()\0logout_clicked()\0"
    "removeUser_clicked()\0generateReport_clicked()\0"
    "viewHospitals_clicked()\0viewNursing_clicked()\0"
    "viewAll_clicked()\0acBeds_clicked()\0"
    "cccBeds_clicked()\0ltcBeds_clicked()\0"
};

const QMetaObject MapWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MapWindow,
      qt_meta_data_MapWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MapWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MapWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MapWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MapWindow))
        return static_cast<void*>(const_cast< MapWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MapWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createUser_clicked(); break;
        case 1: createFac_clicked(); break;
        case 2: logout_clicked(); break;
        case 3: removeUser_clicked(); break;
        case 4: generateReport_clicked(); break;
        case 5: viewHospitals_clicked(); break;
        case 6: viewNursing_clicked(); break;
        case 7: viewAll_clicked(); break;
        case 8: acBeds_clicked(); break;
        case 9: cccBeds_clicked(); break;
        case 10: ltcBeds_clicked(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
