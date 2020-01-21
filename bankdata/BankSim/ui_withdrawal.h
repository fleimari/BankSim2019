/********************************************************************************
** Form generated from reading UI file 'withdrawal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWAL_H
#define UI_WITHDRAWAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Withdrawal
{
public:
    QLabel *labelWithdrawal;
    QPushButton *buttonClearWithdrawal;
    QPushButton *buttonDoWithdrawal;
    QLabel *labelWithdrawalMessage;
    QPushButton *buttonLogout;
    QPushButton *buttonAdd20;
    QPushButton *buttonAdd50;
    QPushButton *buttonAdd500;
    QPushButton *buttonReturnMenu;
    QPushButton *buttonAdd100;
    QTextBrowser *textWithdrawal;

    void setupUi(QWidget *Withdrawal)
    {
        if (Withdrawal->objectName().isEmpty())
            Withdrawal->setObjectName(QString::fromUtf8("Withdrawal"));
        Withdrawal->resize(1665, 1043);
        QFont font;
        font.setFamily(QString::fromUtf8("HP Simplified"));
        Withdrawal->setFont(font);
        labelWithdrawal = new QLabel(Withdrawal);
        labelWithdrawal->setObjectName(QString::fromUtf8("labelWithdrawal"));
        labelWithdrawal->setGeometry(QRect(430, 30, 1001, 91));
        QFont font1;
        font1.setPointSize(46);
        labelWithdrawal->setFont(font1);
        labelWithdrawal->setAlignment(Qt::AlignCenter);
        buttonClearWithdrawal = new QPushButton(Withdrawal);
        buttonClearWithdrawal->setObjectName(QString::fromUtf8("buttonClearWithdrawal"));
        buttonClearWithdrawal->setGeometry(QRect(600, 260, 320, 125));
        QFont font2;
        font2.setPointSize(16);
        buttonClearWithdrawal->setFont(font2);
        buttonClearWithdrawal->setStyleSheet(QString::fromUtf8(""));
        buttonDoWithdrawal = new QPushButton(Withdrawal);
        buttonDoWithdrawal->setObjectName(QString::fromUtf8("buttonDoWithdrawal"));
        buttonDoWithdrawal->setGeometry(QRect(600, 590, 650, 125));
        buttonDoWithdrawal->setFont(font2);
        labelWithdrawalMessage = new QLabel(Withdrawal);
        labelWithdrawalMessage->setObjectName(QString::fromUtf8("labelWithdrawalMessage"));
        labelWithdrawalMessage->setGeometry(QRect(610, 170, 641, 31));
        labelWithdrawalMessage->setFont(font2);
        buttonLogout = new QPushButton(Withdrawal);
        buttonLogout->setObjectName(QString::fromUtf8("buttonLogout"));
        buttonLogout->setGeometry(QRect(1450, 270, 151, 131));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonLogout->sizePolicy().hasHeightForWidth());
        buttonLogout->setSizePolicy(sizePolicy);
        buttonLogout->setFont(font2);
        buttonAdd20 = new QPushButton(Withdrawal);
        buttonAdd20->setObjectName(QString::fromUtf8("buttonAdd20"));
        buttonAdd20->setGeometry(QRect(600, 430, 150, 125));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonAdd20->sizePolicy().hasHeightForWidth());
        buttonAdd20->setSizePolicy(sizePolicy1);
        buttonAdd20->setFont(font2);
        buttonAdd20->setStyleSheet(QString::fromUtf8(""));
        buttonAdd20->setFlat(false);
        buttonAdd50 = new QPushButton(Withdrawal);
        buttonAdd50->setObjectName(QString::fromUtf8("buttonAdd50"));
        buttonAdd50->setGeometry(QRect(770, 430, 150, 125));
        buttonAdd50->setFont(font2);
        buttonAdd500 = new QPushButton(Withdrawal);
        buttonAdd500->setObjectName(QString::fromUtf8("buttonAdd500"));
        buttonAdd500->setGeometry(QRect(1100, 430, 150, 125));
        buttonAdd500->setFont(font2);
        buttonReturnMenu = new QPushButton(Withdrawal);
        buttonReturnMenu->setObjectName(QString::fromUtf8("buttonReturnMenu"));
        buttonReturnMenu->setGeometry(QRect(1450, 470, 151, 121));
        sizePolicy1.setHeightForWidth(buttonReturnMenu->sizePolicy().hasHeightForWidth());
        buttonReturnMenu->setSizePolicy(sizePolicy1);
        buttonReturnMenu->setFont(font2);
        buttonAdd100 = new QPushButton(Withdrawal);
        buttonAdd100->setObjectName(QString::fromUtf8("buttonAdd100"));
        buttonAdd100->setGeometry(QRect(940, 430, 150, 125));
        buttonAdd100->setFont(font2);
        textWithdrawal = new QTextBrowser(Withdrawal);
        textWithdrawal->setObjectName(QString::fromUtf8("textWithdrawal"));
        textWithdrawal->setGeometry(QRect(940, 260, 320, 125));
        QFont font3;
        font3.setPointSize(50);
        textWithdrawal->setFont(font3);

        retranslateUi(Withdrawal);

        buttonAdd20->setDefault(false);


        QMetaObject::connectSlotsByName(Withdrawal);
    } // setupUi

    void retranslateUi(QWidget *Withdrawal)
    {
        Withdrawal->setWindowTitle(QApplication::translate("Withdrawal", "Form", nullptr));
        labelWithdrawal->setText(QApplication::translate("Withdrawal", "Sy\303\266t\303\244 nostettava summa", nullptr));
        buttonClearWithdrawal->setText(QApplication::translate("Withdrawal", "Tyhjenn\303\244 valinnat", nullptr));
        buttonDoWithdrawal->setText(QApplication::translate("Withdrawal", "Nosta rahat", nullptr));
        labelWithdrawalMessage->setText(QApplication::translate("Withdrawal", "Message", nullptr));
        buttonLogout->setText(QApplication::translate("Withdrawal", "Kirjaudu ulos", nullptr));
        buttonAdd20->setText(QApplication::translate("Withdrawal", "+20\342\202\254", nullptr));
        buttonAdd50->setText(QApplication::translate("Withdrawal", "+50\342\202\254", nullptr));
        buttonAdd500->setText(QApplication::translate("Withdrawal", "+500\342\202\254", nullptr));
        buttonReturnMenu->setText(QApplication::translate("Withdrawal", "P\303\244\303\244valikko", nullptr));
        buttonAdd100->setText(QApplication::translate("Withdrawal", "+100\342\202\254", nullptr));
        textWithdrawal->setHtml(QApplication::translate("Withdrawal", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'HP Simplified'; font-size:50pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Withdrawal: public Ui_Withdrawal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWAL_H
