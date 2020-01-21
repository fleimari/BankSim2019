#include "sqlcomponent.h"


SqlComponent::SqlComponent()
{
}

bool SqlComponent::SqlConnect() //connect to database
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setPort(3306);
    db.setDatabaseName("opisk_t3kala01");
    db.setUserName("t3kala01");
    db.setPassword("ryhma600");
    if(db.open()){
        return true;
    }
    else
    {
        return false;
    }

}

bool SqlComponent::getStatus(QString idBankcard) //check if card is locked, TRUE or FALSE
{
    //QString queryPrepStatus = QString("SELECT Status FROM Bankcard WHERE idBankcard = %1").arg(idBankcard);
    //QSqlQuery query(queryPrepStatus);
    QSqlQuery prepStatus;
    prepStatus.prepare("SELECT Status FROM Bankcard WHERE idBankcard = :idBankcard");
    prepStatus.bindValue(0, idBankcard);
    prepStatus.exec();
    while(prepStatus.next())
        {
        int Status = prepStatus.value(0).toInt();

            if (Status == 1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

    return 0;
}

bool SqlComponent::checkCard(QString idBankcard)
{
    //QString queryCheckCard = QString("SELECT idBankcard FROM Bankcard WHERE idBankcard = '%1'").arg(idBankcard);
    //QSqlQuery query(queryCheckCard);
    QSqlQuery checkCard;
    checkCard.prepare("SELECT idCustomer FROM Bankcard WHERE idBankcard = :idBankcard");
    checkCard.bindValue(0, idBankcard);
    checkCard.exec();
    while(checkCard.next())
        {
        int customerCheck = checkCard.value(0).toInt();

            if (customerCheck > 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    return 0;
}

bool SqlComponent::getPin(QString idBankcard, int inputPin) //check if pin matches database, TRUE or FALSE
{
    //QString queryPrepPin = QString("SELECT PinCode FROM Bankcard WHERE idBankcard = %1").arg(idBankcard);
    //QSqlQuery query(queryPrepPin);
    QSqlQuery prepPin;
    prepPin.prepare("SELECT PinCode FROM Bankcard WHERE idBankcard = :idBankcard");
    prepPin.bindValue(0, idBankcard);
    prepPin.exec();
    while(prepPin.next())
        {
        int returnPin = prepPin.value(0).toInt();

            if (inputPin == returnPin)
            {
                pinCounter = 0;
                return true;
            }
            else
            {
                pinCounter++;
                if (pinCounter == 3)
                {
                    lockStatus(idBankcard);
                }
                return false;
            }
        }

    return 0;
}

bool SqlComponent::checkBalance(QString idBankcard, int inputSum)
{
    idAccount = getAccount(idBankcard);
    QSqlQuery checkBal;
    checkBal.prepare("Select Balance from Account where idAccount = :idAccount");
    checkBal.bindValue(0, idAccount);
    checkBal.exec();
    while(checkBal.next())
        {
        Balance = checkBal.value(0).toDouble();
            if (Balance - inputSum >= 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    return 0;
}

void SqlComponent::lockStatus(QString idBankcard)   //if called sets status to 0
{
    //QString queryLockStatus = QString("UPDATE Bankcard SET Status = 0 WHERE idBankcard = %1").arg(idBankcard);
    //QSqlQuery query(queryLockStatus);
    QSqlQuery statusLock;
    statusLock.prepare("UPDATE Bankcard SET Status = 0 WHERE idBankcard = :idBankcard");
    statusLock.bindValue(0, idBankcard);
    statusLock.exec();
}

int SqlComponent::getAccount(QString idBankcard)    //fetches idAccount with idBankcard
{
    QString queryGetCustomer = QString("SELECT idCustomer FROM Bankcard WHERE idBankcard = '%1'").arg(idBankcard);
    QSqlQuery query(queryGetCustomer);
    //QSqlQuery getCustomer;
    //getCustomer.prepare("SELECT idCustomer FROM Bankcard WHERE idBankcard = :idBankcard");
    //getCustomer.bindValue(0, idBankcard);
    //getCustomer.exec();
    while(query.next())
        {
        idCustomer = query.value(0).toInt();
        }
    QString queryGetAccount = QString("SELECT idAccount FROM Account WHERE idCustomer = %1").arg(idCustomer);
    query.exec(queryGetAccount);
    //QSqlQuery getAccountID;
    //getAccountID.prepare("SELECT idAccount FROM Account WHERE idCustomer = :idCustomer");
    //getAccountID.bindValue(0, idBankcard);
    //getAccountID.exec();
    while(query.next())
        {
        idAccount = query.value(0).toInt();
        return idAccount;
        }

    return 0;
}

QSqlQueryModel* SqlComponent::getEvents(QString idBankcard) //returns a query model of events
{
    idAccount = getAccount(idBankcard);
    QString queryGetEvents = QString("SELECT Datetime, Transaction_Value, Recipient FROM Event WHERE idAccount = %1 ORDER BY Datetime DESC LIMIT 10").arg(idAccount);
    QSqlQuery query(queryGetEvents);
    //QSqlQuery prepEvents;
    //prepEvents.prepare("SELECT Datetime, Transaction_Value, Recipient FROM Event WHERE idAccount = :idAccount ORDER BY Datetime DESC LIMIT 10");
    //prepEvents.bindValue(0, idAccount);
    //prepEvents.exec();

    QSqlQueryModel *events = new QSqlQueryModel();
    events->setQuery(queryGetEvents);

    return events;
}

double SqlComponent::getBalance(QString idBankcard)    //returns a query model of account
{
    idAccount = getAccount(idBankcard);

    //QString queryGetBalance = QString("SELECT idAccount, Balance, accountName FROM Account WHERE idAccount = %1").arg(idAccount);
    //QSqlQuery query();
    QSqlQuery prepBalance;
    prepBalance.prepare("SELECT Balance FROM Account WHERE idAccount = :idAccount");
    prepBalance.bindValue(0, idAccount);
    prepBalance.exec();
    while(prepBalance.next())
        {
        Balance = prepBalance.value(0).toDouble();
        }

    //QSqlQueryModel *balance = new QSqlQueryModel();
    //balance->setQuery(queryGetBalance);

    return Balance;
}

int SqlComponent::makeTransaction(QString idBankcard, double Amount)    //Updates balance and adds a new event to the db
{
    idAccount = getAccount(idBankcard);
    double newBalance = 0;
    //QString queryAccBalance = QString("SELECT Balance FROM Account WHERE idAccount = %1").arg(idAccount);
    //QSqlQuery query(queryAccBalance);
    QSqlQuery prepAccBalance;
    prepAccBalance.prepare("SELECT Balance FROM Account WHERE idAccount = :idAccount");
    prepAccBalance.bindValue(0, idAccount);
    prepAccBalance.exec();
    while(prepAccBalance.next())
        {
        Balance = prepAccBalance.value(0).toDouble();
        newBalance = Balance - Amount;
        }

    //QString queryUpdateBalance = QString("UPDATE Account SET Balance = %1 WHERE idAccount = %2").arg(newBalance).arg(idAccount);
    //QSqlQuery query2(queryUpdateBalance);
    QSqlQuery updateBalance;
    updateBalance.prepare("UPDATE Account SET Balance = :newBalance WHERE idAccount = :idAccount");
    updateBalance.bindValue(0, newBalance);
    updateBalance.bindValue(1, idAccount);
    updateBalance.exec();

    Amount = -Amount;
    QSqlQuery addEvent;
    addEvent.prepare("INSERT INTO Event (Datetime, Transaction_Value, idAccount, Recipient)"
                     "VALUES (now(), :Transaction_Value, :idAccount, 'Nosto')");
    addEvent.bindValue(0, Amount);
    addEvent.bindValue(1, idAccount);
    addEvent.exec();

    return newBalance;
}
