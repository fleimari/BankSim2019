/********************************************************************************
** Form generated from reading UI file 'receipt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIPT_H
#define UI_RECEIPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Receipt
{
public:
    QFrame *line;
    QLabel *labelShowWithdrawal;
    QLabel *labelShowBalanceAfter;
    QLabel *label_1;
    QLabel *labelReceipt;
    QLabel *labelReceiptDate;
    QLabel *label_3;
    QLabel *labelShowBalanceBefore;
    QLabel *label_2;
    QPushButton *buttonLogout;
    QPushButton *buttonReturnMenu;

    void setupUi(QWidget *Receipt)
    {
        if (Receipt->objectName().isEmpty())
            Receipt->setObjectName(QString::fromUtf8("Receipt"));
        Receipt->resize(1534, 928);
        QFont font;
        font.setFamily(QString::fromUtf8("HP Simplified"));
        Receipt->setFont(font);
        line = new QFrame(Receipt);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(470, 560, 551, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        labelShowWithdrawal = new QLabel(Receipt);
        labelShowWithdrawal->setObjectName(QString::fromUtf8("labelShowWithdrawal"));
        labelShowWithdrawal->setGeometry(QRect(850, 490, 211, 51));
        QFont font1;
        font1.setPointSize(16);
        labelShowWithdrawal->setFont(font1);
        labelShowBalanceAfter = new QLabel(Receipt);
        labelShowBalanceAfter->setObjectName(QString::fromUtf8("labelShowBalanceAfter"));
        labelShowBalanceAfter->setGeometry(QRect(850, 590, 241, 41));
        labelShowBalanceAfter->setFont(font1);
        label_1 = new QLabel(Receipt);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(480, 390, 171, 41));
        label_1->setFont(font1);
        labelReceipt = new QLabel(Receipt);
        labelReceipt->setObjectName(QString::fromUtf8("labelReceipt"));
        labelReceipt->setGeometry(QRect(550, 50, 411, 91));
        QFont font2;
        font2.setPointSize(46);
        labelReceipt->setFont(font2);
        labelReceipt->setAlignment(Qt::AlignCenter);
        labelReceiptDate = new QLabel(Receipt);
        labelReceiptDate->setObjectName(QString::fromUtf8("labelReceiptDate"));
        labelReceiptDate->setGeometry(QRect(480, 290, 481, 51));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        labelReceiptDate->setFont(font3);
        label_3 = new QLabel(Receipt);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(480, 590, 251, 41));
        label_3->setFont(font1);
        labelShowBalanceBefore = new QLabel(Receipt);
        labelShowBalanceBefore->setObjectName(QString::fromUtf8("labelShowBalanceBefore"));
        labelShowBalanceBefore->setGeometry(QRect(850, 390, 271, 41));
        labelShowBalanceBefore->setFont(font1);
        label_2 = new QLabel(Receipt);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(480, 490, 131, 41));
        label_2->setFont(font1);
        buttonLogout = new QPushButton(Receipt);
        buttonLogout->setObjectName(QString::fromUtf8("buttonLogout"));
        buttonLogout->setGeometry(QRect(1310, 200, 171, 141));
        buttonLogout->setFont(font1);
        buttonReturnMenu = new QPushButton(Receipt);
        buttonReturnMenu->setObjectName(QString::fromUtf8("buttonReturnMenu"));
        buttonReturnMenu->setGeometry(QRect(1320, 460, 161, 141));
        buttonReturnMenu->setFont(font1);

        retranslateUi(Receipt);

        QMetaObject::connectSlotsByName(Receipt);
    } // setupUi

    void retranslateUi(QWidget *Receipt)
    {
        Receipt->setWindowTitle(QApplication::translate("Receipt", "Form", nullptr));
        labelShowWithdrawal->setText(QApplication::translate("Receipt", "Withdrawal", nullptr));
        labelShowBalanceAfter->setText(QApplication::translate("Receipt", "Balance after", nullptr));
        label_1->setText(QApplication::translate("Receipt", "Tilin saldo", nullptr));
        labelReceipt->setText(QApplication::translate("Receipt", "Kuitti", nullptr));
        labelReceiptDate->setText(QApplication::translate("Receipt", "05.04.2019 11:08:12", nullptr));
        label_3->setText(QApplication::translate("Receipt", "Saldo noston j\303\244lkeen", nullptr));
        labelShowBalanceBefore->setText(QApplication::translate("Receipt", "Balance before", nullptr));
        label_2->setText(QApplication::translate("Receipt", "Nosto", nullptr));
        buttonLogout->setText(QApplication::translate("Receipt", "Kirjaudu ulos", nullptr));
        buttonReturnMenu->setText(QApplication::translate("Receipt", "P\303\244\303\244valikko", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Receipt: public Ui_Receipt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIPT_H
