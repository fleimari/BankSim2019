#ifndef RFIDCOMPONENT_H
#define RFIDCOMPONENT_H

#include "rfidcomponent_global.h"
#include <QObject>
#include <QSerialPort>
#include <QDebug>

class RFIDCOMPONENTSHARED_EXPORT RfidComponent : public QObject
{
    Q_OBJECT

public:
    //RfidComponent();
    void RFIDCOMPONENTSHARED_EXPORT callRfidComponent();

private:
    QString cardSerialNumber;
    QSerialPort *serial;

signals:
    void RFIDCOMPONENTSHARED_EXPORT signalFromRfid(QString rfid);

public slots:
    void RFIDCOMPONENTSHARED_EXPORT readRfid();
};

#endif // RFIDCOMPONENT_H
