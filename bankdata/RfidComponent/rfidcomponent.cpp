#include "rfidcomponent.h"


/*RfidComponent::RfidComponent()
{
}*/

void RfidComponent::callRfidComponent()
{
    serial = new QSerialPort(this);
    serial->setPortName("COM9");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::HardwareControl);

    if (serial->open(QIODevice::ReadWrite))
    {
        qDebug() << serial->portName();
    }
    else
    {
        qDebug() << "Portin avaaminen ei onnistunut";
    }
    connect(serial, SIGNAL(readyRead()), this, SLOT(readRfid()));
}

void RfidComponent::readRfid()
{
    char data[20];
    long long int bytesread;
    bytesread = serial->read(data, 20);
    data[bytesread] = '\0';
    if (bytesread > 10)
    {
        for (int i = 0; i < 9; i++)
        {
            cardSerialNumber = data;
        }
        cardSerialNumber.remove(0, 3);
        cardSerialNumber.chop(3);
        qDebug() << "Kortin numero: " << cardSerialNumber;
        //cardSerialNumber = "Virhe";
    }
    else
    {
        qDebug() << "Virhe korttia luettaessa";
        cardSerialNumber = "Virhe";
    }
    emit signalFromRfid(cardSerialNumber);
}
