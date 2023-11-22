/********************************************************************************
** Form generated from reading UI file 'voting2.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTING2_H
#define UI_VOTING2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_voting2
{
public:

    void setupUi(QDialog *voting2)
    {
        if (voting2->objectName().isEmpty())
            voting2->setObjectName("voting2");
        voting2->resize(400, 300);

        retranslateUi(voting2);

        QMetaObject::connectSlotsByName(voting2);
    } // setupUi

    void retranslateUi(QDialog *voting2)
    {
        voting2->setWindowTitle(QCoreApplication::translate("voting2", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class voting2: public Ui_voting2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTING2_H
