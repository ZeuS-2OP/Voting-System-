/********************************************************************************
** Form generated from reading UI file 'voter_login1.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTER_LOGIN1_H
#define UI_VOTER_LOGIN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_voter_login1
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_4;

    void setupUi(QDialog *voter_login1)
    {
        if (voter_login1->objectName().isEmpty())
            voter_login1->setObjectName("voter_login1");
        voter_login1->resize(819, 404);
        label = new QLabel(voter_login1);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 140, 221, 161));
        groupBox = new QGroupBox(voter_login1);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(460, 100, 321, 231));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(142, 90, 161, 24));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(142, 140, 161, 24));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 100, 91, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 150, 101, 16));
        pushButton = new QPushButton(voter_login1);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(590, 360, 80, 24));
        pushButton_2 = new QPushButton(voter_login1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(690, 360, 80, 24));
        pushButton_3 = new QPushButton(voter_login1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 120, 271, 211));
        label_4 = new QLabel(voter_login1);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(338, 20, 181, 20));

        retranslateUi(voter_login1);

        QMetaObject::connectSlotsByName(voter_login1);
    } // setupUi

    void retranslateUi(QDialog *voter_login1)
    {
        voter_login1->setWindowTitle(QCoreApplication::translate("voter_login1", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("voter_login1", "pic", nullptr));
        groupBox->setTitle(QCoreApplication::translate("voter_login1", "sign in", nullptr));
        label_2->setText(QCoreApplication::translate("voter_login1", "username", nullptr));
        label_3->setText(QCoreApplication::translate("voter_login1", "password", nullptr));
        pushButton->setText(QCoreApplication::translate("voter_login1", "logout", nullptr));
        pushButton_2->setText(QCoreApplication::translate("voter_login1", "vote", nullptr));
        pushButton_3->setText(QCoreApplication::translate("voter_login1", "photo", nullptr));
        label_4->setText(QCoreApplication::translate("voter_login1", "voter login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class voter_login1: public Ui_voter_login1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTER_LOGIN1_H
