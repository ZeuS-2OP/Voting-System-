/********************************************************************************
** Form generated from reading UI file 'admin_dashb.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_DASHB_H
#define UI_ADMIN_DASHB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(834, 398);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 110, 761, 241));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 50, 211, 71));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(270, 50, 231, 71));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(530, 50, 211, 71));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 160, 211, 61));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(270, 160, 231, 61));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(530, 160, 211, 61));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(8, 9, 811, 51));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "Data Center", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "View Election Details", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", " Add Candidates", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "Qaulified Candidates", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "Registered Voters", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "Verified Voters", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "Elections Stats", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_DASHB_H
