/********************************************************************************
** Form generated from reading UI file 'admin_login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_LOGIN_H
#define UI_ADMIN_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin_login
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

    void setupUi(QDialog *admin_login)
    {
        if (admin_login->objectName().isEmpty())
            admin_login->setObjectName("admin_login");
        admin_login->resize(833, 403);
        label = new QLabel(admin_login);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setGeometry(QRect(-2, 0, 821, 91));
        label->setLayoutDirection(Qt::RightToLeft);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(admin_login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 100, 231, 151));
        groupBox = new QGroupBox(admin_login);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(440, 90, 271, 171));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 70, 171, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 113, 101, 31));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(92, 70, 161, 31));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(92, 110, 161, 31));
        pushButton = new QPushButton(admin_login);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(540, 340, 80, 24));
        pushButton_2 = new QPushButton(admin_login);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(540, 290, 80, 24));

        retranslateUi(admin_login);

        QMetaObject::connectSlotsByName(admin_login);
    } // setupUi

    void retranslateUi(QDialog *admin_login)
    {
        admin_login->setWindowTitle(QCoreApplication::translate("admin_login", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("admin_login", "admin login", nullptr));
        label_2->setText(QCoreApplication::translate("admin_login", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("admin_login", "sign in", nullptr));
        label_3->setText(QCoreApplication::translate("admin_login", "username", nullptr));
        label_4->setText(QCoreApplication::translate("admin_login", "password", nullptr));
        pushButton->setText(QCoreApplication::translate("admin_login", "log out", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admin_login", "login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_login: public Ui_admin_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_LOGIN_H
