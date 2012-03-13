/****************************************************************************
** Meta object code from reading C++ file 'othello.h'
**
** Created: Tue 13. Mar 19:55:46 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../othello.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'othello.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Othello[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      26,    8,    8,    8, 0x08,
      41,    8,    8,    8, 0x08,
      60,    8,    8,    8, 0x08,
      80,    8,    8,    8, 0x08,
      95,    8,    8,    8, 0x08,
     112,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Othello[] = {
    "Othello\0\0nouvellePartie()\0fermerPartie()\0"
    "observateurTexte()\0observateurExpert()\0"
    "afficherAide()\0afficherAuteur()\0"
    "decocherMenuProposition()\0"
};

const QMetaObject Othello::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Othello,
      qt_meta_data_Othello, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Othello::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Othello::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Othello::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Othello))
        return static_cast<void*>(const_cast< Othello*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Othello::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: nouvellePartie(); break;
        case 1: fermerPartie(); break;
        case 2: observateurTexte(); break;
        case 3: observateurExpert(); break;
        case 4: afficherAide(); break;
        case 5: afficherAuteur(); break;
        case 6: decocherMenuProposition(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
