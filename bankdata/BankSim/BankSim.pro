#-------------------------------------------------
#
# Project created by QtCreator 2019-04-10T10:25:14
#
#-------------------------------------------------

QT       += core gui sql serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BankSim
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    menuwindow.cpp \
    balance.cpp \
    events.cpp \
    withdrawal.cpp \
    getmoney.cpp \
    receipt.cpp \
    charity.cpp \
    thankyoucard.cpp

HEADERS += \
        mainwindow.h \
    menuwindow.h \
    balance.h \
    events.h \
    withdrawal.h \
    getmoney.h \
    receipt.h \
    doubledelegate.h \
    charity.h \
    thankyoucard.h

FORMS += \
        mainwindow.ui \
    menuwindow.ui \
    balance.ui \
    events.ui \
    withdrawal.ui \
    getmoney.ui \
    receipt.ui \
    charity.ui \
    thankyoucard.ui

LIBS += C:\bankdata\BankSim\LoginComponent.dll \
        C:\bankdata\BankSim\SqlComponent.dll \
        C:\bankdata\BankSim\RfidComponent.dll \
        C:\bankdata\BankSim\CharityComponent.dll

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
