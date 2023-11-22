/********************************************************************************
** Form generated from reading UI file 'voting01.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTING01_H
#define UI_VOTING01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_voting01
{
public:
    QGroupBox *groupBox;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *voting01)
    {
        if (voting01->objectName().isEmpty())
            voting01->setObjectName("voting01");
        voting01->resize(821, 429);
        groupBox = new QGroupBox(voting01);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 10, 791, 381));
        line = new QFrame(groupBox);
        line->setObjectName("line");
        line->setGeometry(QRect(132, 20, 51, 361));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(362, 20, 21, 361));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(groupBox);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(583, 20, 20, 361));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(groupBox);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(0, 70, 791, 21));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 40, 49, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 50, 61, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(460, 40, 49, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(670, 40, 49, 16));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(660, 150, 80, 24));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(660, 260, 80, 24));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(40, 120, 80, 91));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(40, 240, 80, 101));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(230, 150, 49, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(230, 280, 49, 16));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(450, 160, 49, 16));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(450, 280, 49, 16));
        pushButton_5 = new QPushButton(voting01);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(700, 400, 80, 24));
        pushButton_6 = new QPushButton(voting01);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(600, 400, 80, 24));
        pushButton_7 = new QPushButton(voting01);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(500, 400, 80, 24));

        retranslateUi(voting01);

        QMetaObject::connectSlotsByName(voting01);
    } // setupUi

    void retranslateUi(QDialog *voting01)
    {
        voting01->setWindowTitle(QCoreApplication::translate("voting01", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("voting01", "voting", nullptr));
        label->setText(QCoreApplication::translate("voting01", "photo", nullptr));
        label_2->setText(QCoreApplication::translate("voting01", "club name", nullptr));
        label_3->setText(QCoreApplication::translate("voting01", "name", nullptr));
        label_4->setText(QCoreApplication::translate("voting01", "vote", nullptr));
        pushButton->setText(QCoreApplication::translate("voting01", "vote", nullptr));
        pushButton_2->setText(QCoreApplication::translate("voting01", "vote", nullptr));
        pushButton_3->setText(QCoreApplication::translate("voting01", "pic1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("voting01", "pic", nullptr));
        label_5->setText(QCoreApplication::translate("voting01", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("voting01", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("voting01", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("voting01", "TextLabel", nullptr));
        pushButton_5->setText(QCoreApplication::translate("voting01", "next", nullptr));
        pushButton_6->setText(QCoreApplication::translate("voting01", "skip", nullptr));
        pushButton_7->setText(QCoreApplication::translate("voting01", "exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class voting01: public Ui_voting01 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTING01_H
