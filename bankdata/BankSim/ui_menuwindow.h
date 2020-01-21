/********************************************************************************
** Form generated from reading UI file 'menuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWINDOW_H
#define UI_MENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWindow
{
public:
    QPushButton *buttonShowBalance;
    QPushButton *buttonShowEvents;
    QPushButton *buttonShowWithdrawal;
    QPushButton *buttonShowCharity;
    QPushButton *buttonLogout;

    void setupUi(QWidget *MenuWindow)
    {
        if (MenuWindow->objectName().isEmpty())
            MenuWindow->setObjectName(QString::fromUtf8("MenuWindow"));
        MenuWindow->resize(1328, 795);
        QFont font;
        font.setFamily(QString::fromUtf8("HP Simplified"));
        font.setBold(false);
        font.setWeight(50);
        MenuWindow->setFont(font);
        buttonShowBalance = new QPushButton(MenuWindow);
        buttonShowBalance->setObjectName(QString::fromUtf8("buttonShowBalance"));
        buttonShowBalance->setGeometry(QRect(490, 50, 351, 111));
        QFont font1;
        font1.setPointSize(26);
        buttonShowBalance->setFont(font1);
        buttonShowBalance->setFlat(true);
        buttonShowEvents = new QPushButton(MenuWindow);
        buttonShowEvents->setObjectName(QString::fromUtf8("buttonShowEvents"));
        buttonShowEvents->setGeometry(QRect(490, 190, 351, 111));
        buttonShowEvents->setFont(font1);
        buttonShowEvents->setFlat(true);
        buttonShowWithdrawal = new QPushButton(MenuWindow);
        buttonShowWithdrawal->setObjectName(QString::fromUtf8("buttonShowWithdrawal"));
        buttonShowWithdrawal->setGeometry(QRect(490, 320, 351, 111));
        buttonShowWithdrawal->setFont(font1);
        buttonShowWithdrawal->setFlat(true);
        buttonShowCharity = new QPushButton(MenuWindow);
        buttonShowCharity->setObjectName(QString::fromUtf8("buttonShowCharity"));
        buttonShowCharity->setGeometry(QRect(490, 450, 351, 111));
        buttonShowCharity->setFont(font1);
        buttonShowCharity->setFlat(true);
        buttonLogout = new QPushButton(MenuWindow);
        buttonLogout->setObjectName(QString::fromUtf8("buttonLogout"));
        buttonLogout->setGeometry(QRect(490, 580, 351, 111));
        buttonLogout->setFont(font1);
        buttonLogout->setFlat(true);

        retranslateUi(MenuWindow);

        QMetaObject::connectSlotsByName(MenuWindow);
    } // setupUi

    void retranslateUi(QWidget *MenuWindow)
    {
        MenuWindow->setWindowTitle(QApplication::translate("MenuWindow", "Form", nullptr));
        buttonShowBalance->setText(QApplication::translate("MenuWindow", "N\303\244yt\303\244 saldo", nullptr));
        buttonShowEvents->setText(QApplication::translate("MenuWindow", "Selaa tilitapahtumia", nullptr));
        buttonShowWithdrawal->setText(QApplication::translate("MenuWindow", "Nosta rahaa", nullptr));
        buttonShowCharity->setText(QApplication::translate("MenuWindow", "Lahjoita hyv\303\244ntekev\303\244isyyteen", nullptr));
        buttonLogout->setText(QApplication::translate("MenuWindow", "Kirjaudu ulos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWindow: public Ui_MenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
