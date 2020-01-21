/********************************************************************************
** Form generated from reading UI file 'charity.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARITY_H
#define UI_CHARITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Charity
{
public:
    QTableView *tableViewCharity;
    QPushButton *buttonLogout;
    QPushButton *buttonReturnMenu;
    QPushButton *buttonDonate20;
    QLabel *labelCharityName;
    QPushButton *buttonDonate5;
    QPushButton *buttonDonate10;
    QLabel *label_2;
    QLabel *label_1;
    QLabel *label_3;
    QLabel *labelCharityAmount;
    QPushButton *buttonDonateComplete;
    QLabel *labelCharity;
    QLabel *labelErrorText;

    void setupUi(QWidget *Charity)
    {
        if (Charity->objectName().isEmpty())
            Charity->setObjectName(QString::fromUtf8("Charity"));
        Charity->resize(1776, 1122);
        QFont font;
        font.setFamily(QString::fromUtf8("HP Simplified"));
        font.setPointSize(46);
        Charity->setFont(font);
        tableViewCharity = new QTableView(Charity);
        tableViewCharity->setObjectName(QString::fromUtf8("tableViewCharity"));
        tableViewCharity->setGeometry(QRect(660, 260, 471, 241));
        buttonLogout = new QPushButton(Charity);
        buttonLogout->setObjectName(QString::fromUtf8("buttonLogout"));
        buttonLogout->setGeometry(QRect(1500, 260, 150, 125));
        QFont font1;
        font1.setPointSize(16);
        buttonLogout->setFont(font1);
        buttonReturnMenu = new QPushButton(Charity);
        buttonReturnMenu->setObjectName(QString::fromUtf8("buttonReturnMenu"));
        buttonReturnMenu->setGeometry(QRect(1500, 840, 150, 125));
        buttonReturnMenu->setFont(font1);
        buttonDonate20 = new QPushButton(Charity);
        buttonDonate20->setObjectName(QString::fromUtf8("buttonDonate20"));
        buttonDonate20->setGeometry(QRect(980, 670, 150, 125));
        buttonDonate20->setFont(font1);
        labelCharityName = new QLabel(Charity);
        labelCharityName->setObjectName(QString::fromUtf8("labelCharityName"));
        labelCharityName->setGeometry(QRect(970, 520, 301, 81));
        labelCharityName->setFont(font1);
        buttonDonate5 = new QPushButton(Charity);
        buttonDonate5->setObjectName(QString::fromUtf8("buttonDonate5"));
        buttonDonate5->setGeometry(QRect(660, 670, 150, 125));
        buttonDonate5->setFont(font1);
        buttonDonate10 = new QPushButton(Charity);
        buttonDonate10->setObjectName(QString::fromUtf8("buttonDonate10"));
        buttonDonate10->setGeometry(QRect(820, 670, 150, 125));
        buttonDonate10->setFont(font1);
        label_2 = new QLabel(Charity);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(660, 520, 331, 61));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_1 = new QLabel(Charity);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(660, 210, 491, 51));
        label_1->setFont(font1);
        label_3 = new QLabel(Charity);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(660, 600, 241, 51));
        label_3->setFont(font2);
        labelCharityAmount = new QLabel(Charity);
        labelCharityAmount->setObjectName(QString::fromUtf8("labelCharityAmount"));
        labelCharityAmount->setGeometry(QRect(970, 600, 281, 41));
        labelCharityAmount->setFont(font1);
        buttonDonateComplete = new QPushButton(Charity);
        buttonDonateComplete->setObjectName(QString::fromUtf8("buttonDonateComplete"));
        buttonDonateComplete->setGeometry(QRect(660, 840, 481, 131));
        buttonDonateComplete->setFont(font1);
        labelCharity = new QLabel(Charity);
        labelCharity->setObjectName(QString::fromUtf8("labelCharity"));
        labelCharity->setGeometry(QRect(380, 20, 800, 160));
        labelCharity->setAlignment(Qt::AlignCenter);
        labelErrorText = new QLabel(Charity);
        labelErrorText->setObjectName(QString::fromUtf8("labelErrorText"));
        labelErrorText->setGeometry(QRect(660, 800, 471, 31));
        labelErrorText->setFont(font1);

        retranslateUi(Charity);

        QMetaObject::connectSlotsByName(Charity);
    } // setupUi

    void retranslateUi(QWidget *Charity)
    {
        Charity->setWindowTitle(QApplication::translate("Charity", "Form", nullptr));
        buttonLogout->setText(QApplication::translate("Charity", "Kirjaudu ulos", nullptr));
        buttonReturnMenu->setText(QApplication::translate("Charity", "P\303\244\303\244valikko", nullptr));
        buttonDonate20->setText(QApplication::translate("Charity", "20\342\202\254", nullptr));
        labelCharityName->setText(QString());
        buttonDonate5->setText(QApplication::translate("Charity", "5\342\202\254", nullptr));
        buttonDonate10->setText(QApplication::translate("Charity", "10\342\202\254", nullptr));
        label_2->setText(QApplication::translate("Charity", "Lahjoituskohteesi", nullptr));
        label_1->setText(QApplication::translate("Charity", "Valitse lahjoituskohde", nullptr));
        label_3->setText(QApplication::translate("Charity", "Lahjoitus summa", nullptr));
        labelCharityAmount->setText(QApplication::translate("Charity", "0", nullptr));
        buttonDonateComplete->setText(QApplication::translate("Charity", "Lahjoita t\303\244st\303\244", nullptr));
        labelCharity->setText(QApplication::translate("Charity", "Lahjoitus", nullptr));
        labelErrorText->setText(QApplication::translate("Charity", "ErrorText", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Charity: public Ui_Charity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARITY_H
