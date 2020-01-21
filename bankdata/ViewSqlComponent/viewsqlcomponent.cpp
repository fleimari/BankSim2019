#include "viewsqlcomponent.h"


ViewSqlComponent::ViewSqlComponent()
{
}

QStringList ViewSqlComponent::getAccounts()
{
    QStringList accounts;
    QSqlQuery prepAccounts;
    prepAccounts.prepare("SELECT idCustomer FROM Account");
    prepAccounts.exec();
    while (prepAccounts.next())
    {
        accounts << prepAccounts.value(0).toString();
    }
    return accounts;
}

QStringList ViewSqlComponent::getBankcards(QString idCustomer)
{
    QStringList bankcards;
    QSqlQuery prepBankcards;
    prepBankcards.prepare(QString("SELECT idBankcard FROM Bankcard WHERE idCustomer = %1").arg(idCustomer));
    prepBankcards.exec();
    while (prepBankcards.next())
    {
        bankcards << prepBankcards.value(0).toString();
    }
    return bankcards;
}

QString ViewSqlComponent::getName(QString idCustomer)
{
    QString customerName;
    QSqlQuery prepCustomerName;
    prepCustomerName.prepare(QString("SELECT fname FROM Customer WHERE idCustomer = %1").arg(idCustomer));
    prepCustomerName.exec();
    while (prepCustomerName.next())
    {
        customerName = prepCustomerName.value(0).toString();
    }
    prepCustomerName.prepare(QString("SELECT lname FROM Customer WHERE idCustomer = %1").arg(idCustomer));
    prepCustomerName.exec();
    while (prepCustomerName.next())
    {
        customerName += " " + prepCustomerName.value(0).toString();
    }

    return customerName;
}

double ViewSqlComponent::getBalance(QString idCustomer)
{
    double customerBalance;
    QSqlQuery prepCustomerBalance;
    prepCustomerBalance.prepare(QString("SELECT Balance FROM Account WHERE idCustomer = %1").arg(idCustomer));
    prepCustomerBalance.exec();
    while (prepCustomerBalance.next())
    {
        customerBalance = prepCustomerBalance.value(0).toDouble();
    }
    return customerBalance;
}

void ViewSqlComponent::changeCardStatus(QString cardID, int newStatus)
{
    QSqlQuery prepUpdateCardStatus;
    prepUpdateCardStatus.prepare("UPDATE Bankcard SET Status = :newStatus WHERE idBankcard = :cardID");
    prepUpdateCardStatus.bindValue(0, newStatus);
    prepUpdateCardStatus.bindValue(1, cardID);
    prepUpdateCardStatus.exec();
}

void ViewSqlComponent::updateBalance(QString idCustomer, double newBalance)
{
    QSqlQuery prepUpdateBalance;
    prepUpdateBalance.prepare("UPDATE Account SET Balance = :newBalance WHERE idCustomer = :account");
    prepUpdateBalance.bindValue(0, newBalance);
    prepUpdateBalance.bindValue(1, idCustomer);
    prepUpdateBalance.exec();
}

int ViewSqlComponent::getPin(QString cardID)
{
    int pinCode;
    QSqlQuery prepGetPin;
    prepGetPin.prepare("SELECT PinCode FROM Bankcard WHERE idBankcard = :cardID");
    prepGetPin.bindValue(0, cardID);
    prepGetPin.exec();
    while (prepGetPin.next())
    {
        pinCode = prepGetPin.value(0).toInt();
    }
    return pinCode;
}

void ViewSqlComponent::updatePin(QString cardID, int newPin)
{
    QSqlQuery prepUpdatePin;
    prepUpdatePin.prepare("UPDATE Bankcard SET PinCode = :newPin WHERE idBankcard = :cardID");
    prepUpdatePin.bindValue(0, newPin);
    prepUpdatePin.bindValue(1, cardID);
    prepUpdatePin.exec();
}



