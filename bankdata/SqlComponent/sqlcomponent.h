#ifndef SQLCOMPONENT_H
#define SQLCOMPONENT_H

#include "sqlcomponent_global.h"
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>

class SQLCOMPONENTSHARED_EXPORT SqlComponent

{

public:
    SqlComponent();
    bool SqlConnect(); //connect to database
    bool getStatus(QString idBankcard); //check if card is locked, TRUE or FALSE
    bool checkCard(QString idBankcard); //check if the card number is in the db
    bool getPin(QString idBankcard, int inputPin); //check if pin matches database, TRUE or FALSE
    bool checkBalance(QString idBankcard, int inputSum);
    QSqlQueryModel* getEvents(QString idBankcard); //returns a query model of events
    double getBalance(QString idBankcard); //returns a query model of account
    int makeTransaction(QString idBankcard, double Amount); //Updates balance and adds a new event to the db

    int getAccount(QString idBankcard); //fetches idAccount with idBankcard
    void lockStatus(QString idBankcard); //if called sets status to 0

private:
    int pinCounter = 0;
    int idCustomer = 0;
    int idAccount = 0;
    double Balance = 0.00;

};

#endif // SQLCOMPONENT_H
