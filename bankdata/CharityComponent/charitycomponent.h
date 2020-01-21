#ifndef CHARITYCOMPONENT_H
#define CHARITYCOMPONENT_H

#include "charitycomponent_global.h"
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>

class CHARITYCOMPONENTSHARED_EXPORT CharityComponent
{

public:
    CharityComponent();
    QSqlQueryModel* getCharity();
    double donateCharity(QString idBankcard, double amount, QString Charity_Name);
    int getAccount(QString Bankcard);

private:
    int idCustomer;
    int idAccount;
    double balance;
};

#endif // CHARITYCOMPONENT_H
