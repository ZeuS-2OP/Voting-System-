/********************************************************************************
** Form generated from reading UI file 'admin_dash.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_DASH_H
#define UI_ADMIN_DASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin_dash
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *admin_dash)
    {
        if (admin_dash->objectName().isEmpty())
            admin_dash->setObjectName("admin_dash");
        admin_dash->resize(820, 425);
        groupBox = new QGroupBox(admin_dash);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 20, 781, 341));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 90, 221, 91));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(280, 90, 221, 91));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(540, 90, 221, 91));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 230, 221, 91));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(280, 230, 231, 91));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(540, 230, 221, 91));
        pushButton_7 = new QPushButton(admin_dash);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(670, 380, 80, 24));

        retranslateUi(admin_dash);

        QMetaObject::connectSlotsByName(admin_dash);
    } // setupUi

    void retranslateUi(QDialog *admin_dash)
    {
        admin_dash->setWindowTitle(QCoreApplication::translate("admin_dash", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("admin_dash", "Dashboard", nullptr));
        pushButton->setText(QCoreApplication::translate("admin_dash", "view election details", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admin_dash", "Qualified candidates", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admin_dash", "verified candidates", nullptr));
        pushButton_4->setText(QCoreApplication::translate("admin_dash", "registered voters", nullptr));
        pushButton_5->setText(QCoreApplication::translate("admin_dash", "verified voters", nullptr));
        pushButton_6->setText(QCoreApplication::translate("admin_dash", "election stats", nullptr));
        pushButton_7->setText(QCoreApplication::translate("admin_dash", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_dash: public Ui_admin_dash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_DASH_H
