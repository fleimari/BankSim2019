/********************************************************************************
** Form generated from reading UI file 'loginmotordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINMOTORDIALOG_H
#define UI_LOGINMOTORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginMotorDialog
{
public:
    QPushButton *buttonLogin;
    QLineEdit *lineEditPW;
    QLabel *labelErrorText;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QPushButton *buttonNumpad1;
    QPushButton *buttonNumpad2;
    QPushButton *buttonNumpad3;
    QSplitter *splitter_3;
    QPushButton *buttonNumpad7;
    QPushButton *buttonNumpad8;
    QPushButton *buttonNumpad9;
    QSplitter *splitter_2;
    QPushButton *buttonNumpad4;
    QPushButton *buttonNumpad5;
    QPushButton *buttonNumpad6;
    QSplitter *splitter_4;
    QPushButton *buttonNumpadNoUse1;
    QPushButton *buttonNumpad0;
    QPushButton *buttonNumpadClear;
    QPushButton *buttonCancelLogin;

    void setupUi(QDialog *LoginMotorDialog)
    {
        if (LoginMotorDialog->objectName().isEmpty())
            LoginMotorDialog->setObjectName(QString::fromUtf8("LoginMotorDialog"));
        LoginMotorDialog->resize(1741, 1304);
        QFont font;
        font.setFamily(QString::fromUtf8("HP Simplified"));
        LoginMotorDialog->setFont(font);
        LoginMotorDialog->setWindowOpacity(1.000000000000000);
        buttonLogin = new QPushButton(LoginMotorDialog);
        buttonLogin->setObjectName(QString::fromUtf8("buttonLogin"));
        buttonLogin->setGeometry(QRect(680, 770, 531, 191));
        QFont font1;
        font1.setPointSize(16);
        buttonLogin->setFont(font1);
        lineEditPW = new QLineEdit(LoginMotorDialog);
        lineEditPW->setObjectName(QString::fromUtf8("lineEditPW"));
        lineEditPW->setGeometry(QRect(860, 150, 171, 71));
        QFont font2;
        font2.setPointSize(25);
        lineEditPW->setFont(font2);
        lineEditPW->setEchoMode(QLineEdit::Password);
        lineEditPW->setAlignment(Qt::AlignCenter);
        labelErrorText = new QLabel(LoginMotorDialog);
        labelErrorText->setObjectName(QString::fromUtf8("labelErrorText"));
        labelErrorText->setGeometry(QRect(680, 80, 521, 51));
        labelErrorText->setFont(font1);
        labelErrorText->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(LoginMotorDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(680, 260, 531, 491));
        layoutWidget->setFont(font1);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(layoutWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setFont(font1);
        splitter->setOrientation(Qt::Horizontal);
        buttonNumpad1 = new QPushButton(splitter);
        buttonNumpad1->setObjectName(QString::fromUtf8("buttonNumpad1"));
        buttonNumpad1->setFont(font1);
        splitter->addWidget(buttonNumpad1);
        buttonNumpad2 = new QPushButton(splitter);
        buttonNumpad2->setObjectName(QString::fromUtf8("buttonNumpad2"));
        buttonNumpad2->setFont(font1);
        splitter->addWidget(buttonNumpad2);
        buttonNumpad3 = new QPushButton(splitter);
        buttonNumpad3->setObjectName(QString::fromUtf8("buttonNumpad3"));
        buttonNumpad3->setFont(font1);
        splitter->addWidget(buttonNumpad3);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        splitter_3 = new QSplitter(layoutWidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setFont(font1);
        splitter_3->setOrientation(Qt::Horizontal);
        buttonNumpad7 = new QPushButton(splitter_3);
        buttonNumpad7->setObjectName(QString::fromUtf8("buttonNumpad7"));
        buttonNumpad7->setFont(font1);
        splitter_3->addWidget(buttonNumpad7);
        buttonNumpad8 = new QPushButton(splitter_3);
        buttonNumpad8->setObjectName(QString::fromUtf8("buttonNumpad8"));
        buttonNumpad8->setFont(font1);
        splitter_3->addWidget(buttonNumpad8);
        buttonNumpad9 = new QPushButton(splitter_3);
        buttonNumpad9->setObjectName(QString::fromUtf8("buttonNumpad9"));
        buttonNumpad9->setFont(font1);
        splitter_3->addWidget(buttonNumpad9);

        gridLayout->addWidget(splitter_3, 2, 0, 1, 1);

        splitter_2 = new QSplitter(layoutWidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setFont(font1);
        splitter_2->setOrientation(Qt::Horizontal);
        buttonNumpad4 = new QPushButton(splitter_2);
        buttonNumpad4->setObjectName(QString::fromUtf8("buttonNumpad4"));
        buttonNumpad4->setFont(font1);
        splitter_2->addWidget(buttonNumpad4);
        buttonNumpad5 = new QPushButton(splitter_2);
        buttonNumpad5->setObjectName(QString::fromUtf8("buttonNumpad5"));
        buttonNumpad5->setFont(font1);
        splitter_2->addWidget(buttonNumpad5);
        buttonNumpad6 = new QPushButton(splitter_2);
        buttonNumpad6->setObjectName(QString::fromUtf8("buttonNumpad6"));
        buttonNumpad6->setFont(font1);
        splitter_2->addWidget(buttonNumpad6);

        gridLayout->addWidget(splitter_2, 1, 0, 1, 1);

        splitter_4 = new QSplitter(layoutWidget);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setFont(font1);
        splitter_4->setOrientation(Qt::Horizontal);
        buttonNumpadNoUse1 = new QPushButton(splitter_4);
        buttonNumpadNoUse1->setObjectName(QString::fromUtf8("buttonNumpadNoUse1"));
        buttonNumpadNoUse1->setEnabled(true);
        buttonNumpadNoUse1->setFont(font1);
        splitter_4->addWidget(buttonNumpadNoUse1);
        buttonNumpad0 = new QPushButton(splitter_4);
        buttonNumpad0->setObjectName(QString::fromUtf8("buttonNumpad0"));
        buttonNumpad0->setFont(font1);
        splitter_4->addWidget(buttonNumpad0);
        buttonNumpadClear = new QPushButton(splitter_4);
        buttonNumpadClear->setObjectName(QString::fromUtf8("buttonNumpadClear"));
        buttonNumpadClear->setFont(font1);
        splitter_4->addWidget(buttonNumpadClear);

        gridLayout->addWidget(splitter_4, 3, 0, 1, 1);

        buttonCancelLogin = new QPushButton(LoginMotorDialog);
        buttonCancelLogin->setObjectName(QString::fromUtf8("buttonCancelLogin"));
        buttonCancelLogin->setGeometry(QRect(1350, 270, 121, 101));
        buttonCancelLogin->setFont(font1);
        buttonCancelLogin->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(LoginMotorDialog);

        QMetaObject::connectSlotsByName(LoginMotorDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginMotorDialog)
    {
        LoginMotorDialog->setWindowTitle(QApplication::translate("LoginMotorDialog", "Dialog", nullptr));
        buttonLogin->setText(QApplication::translate("LoginMotorDialog", "Kirjaudu sis\303\244\303\244n", nullptr));
        lineEditPW->setText(QString());
        labelErrorText->setText(QApplication::translate("LoginMotorDialog", "errorText", nullptr));
        buttonNumpad1->setText(QApplication::translate("LoginMotorDialog", "1", nullptr));
        buttonNumpad2->setText(QApplication::translate("LoginMotorDialog", "2", nullptr));
        buttonNumpad3->setText(QApplication::translate("LoginMotorDialog", "3", nullptr));
        buttonNumpad7->setText(QApplication::translate("LoginMotorDialog", "7", nullptr));
        buttonNumpad8->setText(QApplication::translate("LoginMotorDialog", "8", nullptr));
        buttonNumpad9->setText(QApplication::translate("LoginMotorDialog", "9", nullptr));
        buttonNumpad4->setText(QApplication::translate("LoginMotorDialog", "4", nullptr));
        buttonNumpad5->setText(QApplication::translate("LoginMotorDialog", "5", nullptr));
        buttonNumpad6->setText(QApplication::translate("LoginMotorDialog", "6", nullptr));
        buttonNumpadNoUse1->setText(QApplication::translate("LoginMotorDialog", "X", nullptr));
        buttonNumpad0->setText(QApplication::translate("LoginMotorDialog", "0", nullptr));
        buttonNumpadClear->setText(QApplication::translate("LoginMotorDialog", "Pyyhi", nullptr));
        buttonCancelLogin->setText(QApplication::translate("LoginMotorDialog", "Keskeyt\303\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginMotorDialog: public Ui_LoginMotorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINMOTORDIALOG_H
