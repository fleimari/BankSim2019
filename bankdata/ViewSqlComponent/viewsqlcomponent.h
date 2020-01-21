#ifndef VIEWSQLCOMPONENT_H
#define VIEWSQLCOMPONENT_H

#include "viewsqlcomponent_global.h"
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>

class VIEWSQLCOMPONENTSHARED_EXPORT ViewSqlComponent
{

public:
    ViewSqlComponent();

    QStringList getAccounts();
    QStringList getBankcards(QString idCustomer);
    QString getName(QString idCustomer);
    double getBalance(QString idCustomer);
    void changeCardStatus(QString cardID, int newStatus);
    void updateBalance(QString idCustomer, double newBalance);
    int getPin(QString cardID);
    void updatePin(QString cardID, int newPin);

private:

};

#endif // VIEWSQLCOMPONENT_H
