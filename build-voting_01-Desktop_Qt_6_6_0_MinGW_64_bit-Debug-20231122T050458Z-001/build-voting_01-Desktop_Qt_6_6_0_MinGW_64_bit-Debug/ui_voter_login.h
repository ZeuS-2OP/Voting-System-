/********************************************************************************
** Form generated from reading UI file 'voter_login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTER_LOGIN_H
#define UI_VOTER_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(832, 398);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 9, 811, 81));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 150, 221, 151));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(370, 120, 421, 201));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 50, 81, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 110, 71, 31));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(280, 50, 113, 24));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(280, 110, 113, 24));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(690, 350, 80, 24));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(590, 350, 80, 24));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Voter Login", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "GroupBox", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "password", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Start Voting", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTER_LOGIN_H
