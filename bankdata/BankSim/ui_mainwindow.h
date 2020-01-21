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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *labelMainText;
    QLabel *labelMainImage;
    QLabel *labelConnectionText;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1472, 989);
        QFont font;
        font.setFamily(QString::fromUtf8("HP Simplified"));
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        labelMainText = new QLabel(centralWidget);
        labelMainText->setObjectName(QString::fromUtf8("labelMainText"));
        labelMainText->setGeometry(QRect(430, 40, 621, 101));
        QFont font1;
        font1.setFamily(QString::fromUtf8("HP Simplified"));
        font1.setPointSize(46);
        labelMainText->setFont(font1);
        labelMainText->setAlignment(Qt::AlignCenter);
        labelMainImage = new QLabel(centralWidget);
        labelMainImage->setObjectName(QString::fromUtf8("labelMainImage"));
        labelMainImage->setGeometry(QRect(510, 220, 521, 311));
        labelMainImage->setAlignment(Qt::AlignCenter);
        labelConnectionText = new QLabel(centralWidget);
        labelConnectionText->setObjectName(QString::fromUtf8("labelConnectionText"));
        labelConnectionText->setGeometry(QRect(460, 800, 1281, 31));
        QFont font2;
        font2.setPointSize(16);
        labelConnectionText->setFont(font2);
        labelConnectionText->setStyleSheet(QString::fromUtf8(""));
        labelConnectionText->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1472, 26));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        labelMainText->setText(QApplication::translate("MainWindow", "Sy\303\266t\303\244 kortti", nullptr));
        labelMainImage->setText(QApplication::translate("MainWindow", "image", nullptr));
        labelConnectionText->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">connectionText</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
