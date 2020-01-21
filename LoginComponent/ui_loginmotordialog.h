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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginMotorDialog
{
public:
    QPushButton *buttonLogin;
    QLineEdit *lineEditPW;
    QLabel *labelErrorText;
    QPushButton *buttonCancelLogin;
    QPushButton *buttonNumpad2;
    QPushButton *buttonNumpad1;
    QPushButton *buttonNumpad3;
    QPushButton *buttonNumpad7;
    QPushButton *buttonNumpad8;
    QPushButton *buttonNumpad9;
    QPushButton *buttonNumpad5;
    QPushButton *buttonNumpad4;
    QPushButton *buttonNumpad6;
    QPushButton *buttonNumpadClear;
    QPushButton *buttonNumpad0;
    QPushButton *buttonNumpadNoUse1;

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
        buttonCancelLogin = new QPushButton(LoginMotorDialog);
        buttonCancelLogin->setObjectName(QString::fromUtf8("buttonCancelLogin"));
        buttonCancelLogin->setGeometry(QRect(1350, 270, 121, 101));
        buttonCancelLogin->setFont(font1);
        buttonCancelLogin->setStyleSheet(QString::fromUtf8(""));
        buttonNumpad2 = new QPushButton(LoginMotorDialog);
        buttonNumpad2->setObjectName(QString::fromUtf8("buttonNumpad2"));
        buttonNumpad2->setGeometry(QRect(776, 261, 89, 45));
        buttonNumpad2->setFont(font1);
        buttonNumpad1 = new QPushButton(LoginMotorDialog);
        buttonNumpad1->setObjectName(QString::fromUtf8("buttonNumpad1"));
        buttonNumpad1->setGeometry(QRect(681, 261, 89, 45));
        buttonNumpad1->setFont(font1);
        buttonNumpad1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        buttonNumpad3 = new QPushButton(LoginMotorDialog);
        buttonNumpad3->setObjectName(QString::fromUtf8("buttonNumpad3"));
        buttonNumpad3->setGeometry(QRect(871, 261, 89, 45));
        buttonNumpad3->setFont(font1);
        buttonNumpad7 = new QPushButton(LoginMotorDialog);
        buttonNumpad7->setObjectName(QString::fromUtf8("buttonNumpad7"));
        buttonNumpad7->setGeometry(QRect(681, 509, 89, 45));
        buttonNumpad7->setFont(font1);
        buttonNumpad8 = new QPushButton(LoginMotorDialog);
        buttonNumpad8->setObjectName(QString::fromUtf8("buttonNumpad8"));
        buttonNumpad8->setGeometry(QRect(776, 509, 89, 45));
        buttonNumpad8->setFont(font1);
        buttonNumpad9 = new QPushButton(LoginMotorDialog);
        buttonNumpad9->setObjectName(QString::fromUtf8("buttonNumpad9"));
        buttonNumpad9->setGeometry(QRect(871, 509, 89, 45));
        buttonNumpad9->setFont(font1);
        buttonNumpad5 = new QPushButton(LoginMotorDialog);
        buttonNumpad5->setObjectName(QString::fromUtf8("buttonNumpad5"));
        buttonNumpad5->setGeometry(QRect(776, 385, 89, 45));
        buttonNumpad5->setFont(font1);
        buttonNumpad4 = new QPushButton(LoginMotorDialog);
        buttonNumpad4->setObjectName(QString::fromUtf8("buttonNumpad4"));
        buttonNumpad4->setGeometry(QRect(681, 385, 89, 45));
        buttonNumpad4->setFont(font1);
        buttonNumpad6 = new QPushButton(LoginMotorDialog);
        buttonNumpad6->setObjectName(QString::fromUtf8("buttonNumpad6"));
        buttonNumpad6->setGeometry(QRect(871, 385, 89, 45));
        buttonNumpad6->setFont(font1);
        buttonNumpadClear = new QPushButton(LoginMotorDialog);
        buttonNumpadClear->setObjectName(QString::fromUtf8("buttonNumpadClear"));
        buttonNumpadClear->setGeometry(QRect(871, 633, 89, 45));
        buttonNumpadClear->setFont(font1);
        buttonNumpad0 = new QPushButton(LoginMotorDialog);
        buttonNumpad0->setObjectName(QString::fromUtf8("buttonNumpad0"));
        buttonNumpad0->setGeometry(QRect(776, 633, 89, 45));
        buttonNumpad0->setFont(font1);
        buttonNumpadNoUse1 = new QPushButton(LoginMotorDialog);
        buttonNumpadNoUse1->setObjectName(QString::fromUtf8("buttonNumpadNoUse1"));
        buttonNumpadNoUse1->setEnabled(true);
        buttonNumpadNoUse1->setGeometry(QRect(681, 633, 89, 45));
        buttonNumpadNoUse1->setFont(font1);

        retranslateUi(LoginMotorDialog);

        QMetaObject::connectSlotsByName(LoginMotorDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginMotorDialog)
    {
        LoginMotorDialog->setWindowTitle(QApplication::translate("LoginMotorDialog", "Dialog", nullptr));
        buttonLogin->setText(QApplication::translate("LoginMotorDialog", "Kirjaudu sis\303\244\303\244n", nullptr));
        lineEditPW->setText(QString());
        labelErrorText->setText(QApplication::translate("LoginMotorDialog", "errorText", nullptr));
        buttonCancelLogin->setText(QApplication::translate("LoginMotorDialog", "Keskeyt\303\244", nullptr));
        buttonNumpad2->setText(QApplication::translate("LoginMotorDialog", "2", nullptr));
        buttonNumpad1->setText(QApplication::translate("LoginMotorDialog", "1", nullptr));
        buttonNumpad3->setText(QApplication::translate("LoginMotorDialog", "3", nullptr));
        buttonNumpad7->setText(QApplication::translate("LoginMotorDialog", "7", nullptr));
        buttonNumpad8->setText(QApplication::translate("LoginMotorDialog", "8", nullptr));
        buttonNumpad9->setText(QApplication::translate("LoginMotorDialog", "9", nullptr));
        buttonNumpad5->setText(QApplication::translate("LoginMotorDialog", "5", nullptr));
        buttonNumpad4->setText(QApplication::translate("LoginMotorDialog", "4", nullptr));
        buttonNumpad6->setText(QApplication::translate("LoginMotorDialog", "6", nullptr));
        buttonNumpadClear->setText(QApplication::translate("LoginMotorDialog", "Pyyhi", nullptr));
        buttonNumpad0->setText(QApplication::translate("LoginMotorDialog", "0", nullptr));
        buttonNumpadNoUse1->setText(QApplication::translate("LoginMotorDialog", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginMotorDialog: public Ui_LoginMotorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINMOTORDIALOG_H
