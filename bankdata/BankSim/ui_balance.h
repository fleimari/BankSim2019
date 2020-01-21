/********************************************************************************
** Form generated from reading UI file 'balance.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALANCE_H
#define UI_BALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Balance
{
public:
    QLabel *labelBalance;
    QLabel *labelBalanceDate;
    QLabel *labelTextBalance;
    QLabel *labelShowBalance;
    QPushButton *buttonLogout;
    QPushButton *buttonReturnMenu;

    void setupUi(QWidget *Balance)
    {
        if (Balance->objectName().isEmpty())
            Balance->setObjectName(QString::fromUtf8("Balance"));
        Balance->resize(1435, 788);
        QFont font;
        font.setFamily(QString::fromUtf8("HP Simplified"));
        Balance->setFont(font);
        labelBalance = new QLabel(Balance);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setGeometry(QRect(460, 30, 501, 121));
        QFont font1;
        font1.setPointSize(46);
        labelBalance->setFont(font1);
        labelBalance->setAlignment(Qt::AlignCenter);
        labelBalanceDate = new QLabel(Balance);
        labelBalanceDate->setObjectName(QString::fromUtf8("labelBalanceDate"));
        labelBalanceDate->setGeometry(QRect(530, 290, 311, 51));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        labelBalanceDate->setFont(font2);
        labelTextBalance = new QLabel(Balance);
        labelTextBalance->setObjectName(QString::fromUtf8("labelTextBalance"));
        labelTextBalance->setGeometry(QRect(520, 420, 201, 41));
        QFont font3;
        font3.setPointSize(16);
        labelTextBalance->setFont(font3);
        labelShowBalance = new QLabel(Balance);
        labelShowBalance->setObjectName(QString::fromUtf8("labelShowBalance"));
        labelShowBalance->setGeometry(QRect(910, 430, 181, 31));
        labelShowBalance->setFont(font3);
        buttonLogout = new QPushButton(Balance);
        buttonLogout->setObjectName(QString::fromUtf8("buttonLogout"));
        buttonLogout->setGeometry(QRect(1220, 90, 161, 111));
        buttonLogout->setFont(font3);
        buttonReturnMenu = new QPushButton(Balance);
        buttonReturnMenu->setObjectName(QString::fromUtf8("buttonReturnMenu"));
        buttonReturnMenu->setGeometry(QRect(1230, 290, 161, 121));
        buttonReturnMenu->setFont(font3);

        retranslateUi(Balance);

        QMetaObject::connectSlotsByName(Balance);
    } // setupUi

    void retranslateUi(QWidget *Balance)
    {
        Balance->setWindowTitle(QApplication::translate("Balance", "Form", nullptr));
        labelBalance->setText(QApplication::translate("Balance", "N\303\244yt\303\244 saldo", nullptr));
        labelBalanceDate->setText(QApplication::translate("Balance", "08.04.2019 11:00:12 ", nullptr));
        labelTextBalance->setText(QApplication::translate("Balance", "Tilin saldo", nullptr));
        labelShowBalance->setText(QApplication::translate("Balance", "Balance", nullptr));
        buttonLogout->setText(QApplication::translate("Balance", "Kirjaudu ulos", nullptr));
        buttonReturnMenu->setText(QApplication::translate("Balance", "P\303\244\303\244valikko", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Balance: public Ui_Balance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCE_H
