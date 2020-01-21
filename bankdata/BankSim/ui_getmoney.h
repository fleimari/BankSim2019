/********************************************************************************
** Form generated from reading UI file 'getmoney.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETMONEY_H
#define UI_GETMONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetMoney
{
public:
    QLabel *labelGetMoneyText;
    QLabel *labelGetMoneyImage;
    QGroupBox *groupReceiptScreenOrPaper;
    QPushButton *buttonReceiptScreen;
    QPushButton *buttonReceiptPaper;
    QLabel *labelAskReceiptScreenOrPaper;
    QGroupBox *groupAskReceipt;
    QPushButton *buttonReceiptYes;
    QPushButton *buttonReceiptNo;
    QLabel *labelAskReceipt;

    void setupUi(QWidget *GetMoney)
    {
        if (GetMoney->objectName().isEmpty())
            GetMoney->setObjectName(QString::fromUtf8("GetMoney"));
        GetMoney->resize(1704, 1121);
        QFont font;
        font.setFamily(QString::fromUtf8("HP Simplified"));
        GetMoney->setFont(font);
        labelGetMoneyText = new QLabel(GetMoney);
        labelGetMoneyText->setObjectName(QString::fromUtf8("labelGetMoneyText"));
        labelGetMoneyText->setGeometry(QRect(740, 40, 631, 131));
        QFont font1;
        font1.setPointSize(46);
        labelGetMoneyText->setFont(font1);
        labelGetMoneyText->setAlignment(Qt::AlignCenter);
        labelGetMoneyImage = new QLabel(GetMoney);
        labelGetMoneyImage->setObjectName(QString::fromUtf8("labelGetMoneyImage"));
        labelGetMoneyImage->setGeometry(QRect(520, 190, 1011, 591));
        labelGetMoneyImage->setAlignment(Qt::AlignCenter);
        groupReceiptScreenOrPaper = new QGroupBox(GetMoney);
        groupReceiptScreenOrPaper->setObjectName(QString::fromUtf8("groupReceiptScreenOrPaper"));
        groupReceiptScreenOrPaper->setGeometry(QRect(1150, 920, 600, 200));
        QFont font2;
        font2.setPointSize(16);
        groupReceiptScreenOrPaper->setFont(font2);
        buttonReceiptScreen = new QPushButton(groupReceiptScreenOrPaper);
        buttonReceiptScreen->setObjectName(QString::fromUtf8("buttonReceiptScreen"));
        buttonReceiptScreen->setGeometry(QRect(80, 80, 160, 80));
        buttonReceiptScreen->setFont(font2);
        buttonReceiptPaper = new QPushButton(groupReceiptScreenOrPaper);
        buttonReceiptPaper->setObjectName(QString::fromUtf8("buttonReceiptPaper"));
        buttonReceiptPaper->setGeometry(QRect(360, 80, 160, 80));
        buttonReceiptPaper->setFont(font2);
        labelAskReceiptScreenOrPaper = new QLabel(groupReceiptScreenOrPaper);
        labelAskReceiptScreenOrPaper->setObjectName(QString::fromUtf8("labelAskReceiptScreenOrPaper"));
        labelAskReceiptScreenOrPaper->setGeometry(QRect(0, 30, 601, 31));
        labelAskReceiptScreenOrPaper->setFont(font2);
        labelAskReceiptScreenOrPaper->setAlignment(Qt::AlignCenter);
        groupAskReceipt = new QGroupBox(GetMoney);
        groupAskReceipt->setObjectName(QString::fromUtf8("groupAskReceipt"));
        groupAskReceipt->setGeometry(QRect(530, 920, 600, 200));
        groupAskReceipt->setFont(font2);
        buttonReceiptYes = new QPushButton(groupAskReceipt);
        buttonReceiptYes->setObjectName(QString::fromUtf8("buttonReceiptYes"));
        buttonReceiptYes->setGeometry(QRect(80, 80, 160, 80));
        buttonReceiptYes->setFont(font2);
        buttonReceiptNo = new QPushButton(groupAskReceipt);
        buttonReceiptNo->setObjectName(QString::fromUtf8("buttonReceiptNo"));
        buttonReceiptNo->setGeometry(QRect(360, 80, 160, 80));
        buttonReceiptNo->setFont(font2);
        labelAskReceipt = new QLabel(groupAskReceipt);
        labelAskReceipt->setObjectName(QString::fromUtf8("labelAskReceipt"));
        labelAskReceipt->setGeometry(QRect(0, 30, 571, 20));
        labelAskReceipt->setFont(font2);
        labelAskReceipt->setAlignment(Qt::AlignCenter);

        retranslateUi(GetMoney);

        QMetaObject::connectSlotsByName(GetMoney);
    } // setupUi

    void retranslateUi(QWidget *GetMoney)
    {
        GetMoney->setWindowTitle(QApplication::translate("GetMoney", "Form", nullptr));
        labelGetMoneyText->setText(QApplication::translate("GetMoney", "Rahat tulossa...", nullptr));
        labelGetMoneyImage->setText(QApplication::translate("GetMoney", "Image", nullptr));
        groupReceiptScreenOrPaper->setTitle(QString());
        buttonReceiptScreen->setText(QApplication::translate("GetMoney", "N\303\244yt\303\266lle", nullptr));
        buttonReceiptPaper->setText(QApplication::translate("GetMoney", "Paperille", nullptr));
        labelAskReceiptScreenOrPaper->setText(QApplication::translate("GetMoney", "Tulostetaanko kuitti n\303\244yt\303\266lle vai paperille?", nullptr));
        groupAskReceipt->setTitle(QString());
        buttonReceiptYes->setText(QApplication::translate("GetMoney", "Kyll\303\244", nullptr));
        buttonReceiptNo->setText(QApplication::translate("GetMoney", "Ei", nullptr));
        labelAskReceipt->setText(QApplication::translate("GetMoney", "Tulostetaanko kuitti?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetMoney: public Ui_GetMoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETMONEY_H
