/********************************************************************************
** Form generated from reading UI file 'events.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTS_H
#define UI_EVENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Events
{
public:
    QLabel *labelEvents;
    QTableView *tableViewEvents;
    QPushButton *buttonLogout;
    QPushButton *buttonReturnMenu;
    QLabel *labelPVM;
    QLabel *labelValue;
    QLabel *labelReceiver;

    void setupUi(QWidget *Events)
    {
        if (Events->objectName().isEmpty())
            Events->setObjectName(QString::fromUtf8("Events"));
        Events->resize(1616, 742);
        QFont font;
        font.setFamily(QString::fromUtf8("HP Simplified"));
        Events->setFont(font);
        labelEvents = new QLabel(Events);
        labelEvents->setObjectName(QString::fromUtf8("labelEvents"));
        labelEvents->setGeometry(QRect(230, 20, 711, 101));
        QFont font1;
        font1.setPointSize(46);
        labelEvents->setFont(font1);
        labelEvents->setAlignment(Qt::AlignCenter);
        tableViewEvents = new QTableView(Events);
        tableViewEvents->setObjectName(QString::fromUtf8("tableViewEvents"));
        tableViewEvents->setGeometry(QRect(600, 260, 730, 700));
        buttonLogout = new QPushButton(Events);
        buttonLogout->setObjectName(QString::fromUtf8("buttonLogout"));
        buttonLogout->setGeometry(QRect(1410, 220, 171, 101));
        QFont font2;
        font2.setPointSize(16);
        buttonLogout->setFont(font2);
        buttonLogout->setAutoFillBackground(false);
        buttonLogout->setStyleSheet(QString::fromUtf8(""));
        buttonReturnMenu = new QPushButton(Events);
        buttonReturnMenu->setObjectName(QString::fromUtf8("buttonReturnMenu"));
        buttonReturnMenu->setGeometry(QRect(1410, 400, 151, 101));
        buttonReturnMenu->setFont(font2);
        labelPVM = new QLabel(Events);
        labelPVM->setObjectName(QString::fromUtf8("labelPVM"));
        labelPVM->setGeometry(QRect(600, 210, 121, 21));
        labelPVM->setFont(font2);
        labelValue = new QLabel(Events);
        labelValue->setObjectName(QString::fromUtf8("labelValue"));
        labelValue->setGeometry(QRect(820, 190, 121, 21));
        labelValue->setFont(font2);
        labelReceiver = new QLabel(Events);
        labelReceiver->setObjectName(QString::fromUtf8("labelReceiver"));
        labelReceiver->setGeometry(QRect(1130, 190, 121, 31));
        labelReceiver->setFont(font2);

        retranslateUi(Events);

        QMetaObject::connectSlotsByName(Events);
    } // setupUi

    void retranslateUi(QWidget *Events)
    {
        Events->setWindowTitle(QApplication::translate("Events", "Form", nullptr));
        labelEvents->setText(QApplication::translate("Events", "Tilitapahtumat", nullptr));
        buttonLogout->setText(QApplication::translate("Events", "Kirjaudu ulos", nullptr));
        buttonReturnMenu->setText(QApplication::translate("Events", "P\303\244\303\244valikko", nullptr));
        labelPVM->setText(QApplication::translate("Events", "PVM", nullptr));
        labelValue->setText(QApplication::translate("Events", "Summa (\342\202\254)", nullptr));
        labelReceiver->setText(QApplication::translate("Events", "Saaja", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Events: public Ui_Events {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTS_H
