/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QListView *listViewAccounts;
    QListView *listViewBankcards;
    QLabel *label_1;
    QLabel *labelCustomerName;
    QLabel *labelAccount;
    QLabel *labelBankcard;
    QLabel *label_2;
    QLabel *labelCustomerBalance;
    QLabel *label_3;
    QLabel *labelCardStatus;
    QPushButton *buttonCardStatus;
    QLineEdit *lineNewBalance;
    QPushButton *buttonNewBalance;
    QLabel *label_4;
    QLabel *labelErrorText;
    QLabel *label_5;
    QLabel *labelCardPin;
    QLineEdit *lineNewPin;
    QLabel *label_6;
    QPushButton *buttonNewPin;
    QLabel *labelErrorText_2;
    QLineEdit *lineNewBalance_2;
    QLabel *labelDot;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1085, 654);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        listViewAccounts = new QListView(centralWidget);
        listViewAccounts->setObjectName(QString::fromUtf8("listViewAccounts"));
        listViewAccounts->setEnabled(true);
        listViewAccounts->setGeometry(QRect(70, 100, 256, 192));
        listViewAccounts->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listViewBankcards = new QListView(centralWidget);
        listViewBankcards->setObjectName(QString::fromUtf8("listViewBankcards"));
        listViewBankcards->setGeometry(QRect(420, 100, 256, 192));
        listViewBankcards->setEditTriggers(QAbstractItemView::NoEditTriggers);
        label_1 = new QLabel(centralWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(70, 310, 41, 16));
        QFont font1;
        font1.setUnderline(true);
        label_1->setFont(font1);
        labelCustomerName = new QLabel(centralWidget);
        labelCustomerName->setObjectName(QString::fromUtf8("labelCustomerName"));
        labelCustomerName->setGeometry(QRect(120, 310, 171, 16));
        labelAccount = new QLabel(centralWidget);
        labelAccount->setObjectName(QString::fromUtf8("labelAccount"));
        labelAccount->setGeometry(QRect(70, 70, 161, 16));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        labelAccount->setFont(font2);
        labelBankcard = new QLabel(centralWidget);
        labelBankcard->setObjectName(QString::fromUtf8("labelBankcard"));
        labelBankcard->setGeometry(QRect(420, 70, 161, 16));
        labelBankcard->setFont(font2);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 340, 41, 16));
        label_2->setFont(font1);
        labelCustomerBalance = new QLabel(centralWidget);
        labelCustomerBalance->setObjectName(QString::fromUtf8("labelCustomerBalance"));
        labelCustomerBalance->setGeometry(QRect(120, 340, 171, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(420, 310, 51, 16));
        label_3->setFont(font1);
        labelCardStatus = new QLabel(centralWidget);
        labelCardStatus->setObjectName(QString::fromUtf8("labelCardStatus"));
        labelCardStatus->setGeometry(QRect(480, 310, 171, 16));
        buttonCardStatus = new QPushButton(centralWidget);
        buttonCardStatus->setObjectName(QString::fromUtf8("buttonCardStatus"));
        buttonCardStatus->setGeometry(QRect(420, 350, 171, 23));
        lineNewBalance = new QLineEdit(centralWidget);
        lineNewBalance->setObjectName(QString::fromUtf8("lineNewBalance"));
        lineNewBalance->setGeometry(QRect(70, 420, 41, 20));
        buttonNewBalance = new QPushButton(centralWidget);
        buttonNewBalance->setObjectName(QString::fromUtf8("buttonNewBalance"));
        buttonNewBalance->setGeometry(QRect(70, 450, 111, 23));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 400, 111, 16));
        labelErrorText = new QLabel(centralWidget);
        labelErrorText->setObjectName(QString::fromUtf8("labelErrorText"));
        labelErrorText->setGeometry(QRect(70, 500, 281, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(420, 430, 61, 16));
        label_5->setFont(font1);
        labelCardPin = new QLabel(centralWidget);
        labelCardPin->setObjectName(QString::fromUtf8("labelCardPin"));
        labelCardPin->setGeometry(QRect(490, 430, 171, 16));
        lineNewPin = new QLineEdit(centralWidget);
        lineNewPin->setObjectName(QString::fromUtf8("lineNewPin"));
        lineNewPin->setGeometry(QRect(420, 490, 113, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(420, 470, 111, 16));
        buttonNewPin = new QPushButton(centralWidget);
        buttonNewPin->setObjectName(QString::fromUtf8("buttonNewPin"));
        buttonNewPin->setGeometry(QRect(420, 520, 111, 23));
        labelErrorText_2 = new QLabel(centralWidget);
        labelErrorText_2->setObjectName(QString::fromUtf8("labelErrorText_2"));
        labelErrorText_2->setGeometry(QRect(420, 560, 281, 16));
        lineNewBalance_2 = new QLineEdit(centralWidget);
        lineNewBalance_2->setObjectName(QString::fromUtf8("lineNewBalance_2"));
        lineNewBalance_2->setGeometry(QRect(120, 420, 21, 20));
        labelDot = new QLabel(centralWidget);
        labelDot->setObjectName(QString::fromUtf8("labelDot"));
        labelDot->setEnabled(true);
        labelDot->setGeometry(QRect(110, 430, 10, 10));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        labelDot->setFont(font3);
        labelDot->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_1->setText(QApplication::translate("MainWindow", "Nimi:", nullptr));
        labelCustomerName->setText(QString());
        labelAccount->setText(QApplication::translate("MainWindow", "Tilit", nullptr));
        labelBankcard->setText(QApplication::translate("MainWindow", "Pankkikortit", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Saldo:", nullptr));
        labelCustomerBalance->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Kortin tila:", nullptr));
        labelCardStatus->setText(QString());
        buttonCardStatus->setText(QApplication::translate("MainWindow", "Kortti", nullptr));
        lineNewBalance->setInputMask(QString());
        lineNewBalance->setText(QString());
        buttonNewBalance->setText(QApplication::translate("MainWindow", "L\303\244het\303\244", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Anna uusi saldo", nullptr));
        labelErrorText->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Kortin PIN:", nullptr));
        labelCardPin->setText(QString());
        lineNewPin->setInputMask(QString());
        label_6->setText(QApplication::translate("MainWindow", "Anna uusi PIN-koodi", nullptr));
        buttonNewPin->setText(QApplication::translate("MainWindow", "L\303\244het\303\244", nullptr));
        labelErrorText_2->setText(QString());
        lineNewBalance_2->setInputMask(QString());
        lineNewBalance_2->setText(QApplication::translate("MainWindow", "00", nullptr));
        labelDot->setText(QApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
