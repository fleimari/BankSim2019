/********************************************************************************
** Form generated from reading UI file 'thankyoucard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THANKYOUCARD_H
#define UI_THANKYOUCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThankYouCard
{
public:
    QLabel *labelDonateText;
    QLabel *labelDonateTarget;
    QPushButton *buttonReturnMenu;
    QPushButton *buttonLogout;
    QLabel *labelDonateImage;

    void setupUi(QWidget *ThankYouCard)
    {
        if (ThankYouCard->objectName().isEmpty())
            ThankYouCard->setObjectName(QString::fromUtf8("ThankYouCard"));
        ThankYouCard->resize(1579, 936);
        QFont font;
        font.setFamily(QString::fromUtf8("HP Simplified"));
        ThankYouCard->setFont(font);
        labelDonateText = new QLabel(ThankYouCard);
        labelDonateText->setObjectName(QString::fromUtf8("labelDonateText"));
        labelDonateText->setGeometry(QRect(450, 600, 571, 51));
        QFont font1;
        font1.setPointSize(16);
        labelDonateText->setFont(font1);
        labelDonateText->setAlignment(Qt::AlignCenter);
        labelDonateTarget = new QLabel(ThankYouCard);
        labelDonateTarget->setObjectName(QString::fromUtf8("labelDonateTarget"));
        labelDonateTarget->setGeometry(QRect(440, 480, 731, 91));
        QFont font2;
        font2.setPointSize(46);
        labelDonateTarget->setFont(font2);
        labelDonateTarget->setAlignment(Qt::AlignCenter);
        buttonReturnMenu = new QPushButton(ThankYouCard);
        buttonReturnMenu->setObjectName(QString::fromUtf8("buttonReturnMenu"));
        buttonReturnMenu->setGeometry(QRect(1350, 380, 151, 101));
        buttonReturnMenu->setFont(font1);
        buttonLogout = new QPushButton(ThankYouCard);
        buttonLogout->setObjectName(QString::fromUtf8("buttonLogout"));
        buttonLogout->setGeometry(QRect(1340, 120, 171, 101));
        buttonLogout->setFont(font1);
        labelDonateImage = new QLabel(ThankYouCard);
        labelDonateImage->setObjectName(QString::fromUtf8("labelDonateImage"));
        labelDonateImage->setGeometry(QRect(430, 80, 461, 331));
        labelDonateImage->setAlignment(Qt::AlignCenter);

        retranslateUi(ThankYouCard);

        QMetaObject::connectSlotsByName(ThankYouCard);
    } // setupUi

    void retranslateUi(QWidget *ThankYouCard)
    {
        ThankYouCard->setWindowTitle(QApplication::translate("ThankYouCard", "Form", nullptr));
        labelDonateText->setText(QApplication::translate("ThankYouCard", "kiitt\303\244\303\244 lahjoituksestasi", nullptr));
        labelDonateTarget->setText(QApplication::translate("ThankYouCard", "TextLabel", nullptr));
        buttonReturnMenu->setText(QApplication::translate("ThankYouCard", "P\303\244\303\244valikko", nullptr));
        buttonLogout->setText(QApplication::translate("ThankYouCard", "Kirjaudu ulos", nullptr));
        labelDonateImage->setText(QApplication::translate("ThankYouCard", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThankYouCard: public Ui_ThankYouCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THANKYOUCARD_H
