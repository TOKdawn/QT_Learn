#include "finddialog.h"
#include <QApplication>

FindDialog::FindDialog(QWidget *parent) : QDialog(parent){
    label = new QLabel(tr("Find &what:"));
    lineEdit = new QLineEdit;
    label->setBuddy(lineEdit);
    caseCheckBox = new QCheckBox(tr("Match &case"));
    backwardCheckBox = new QCheckBox(tr("Search &backward"));
    FindButton = new QPushButton(tr("&Find"));
    //留坑

}

