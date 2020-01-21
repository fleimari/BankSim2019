#include "charityComponent.h"


CharityComponent::CharityComponent()
{

}

QSqlQueryModel* CharityComponent::getCharity() //Get charity targets
{
    QSqlQueryModel *charity = new QSqlQueryModel();
    charity->setQuery("SELECT Charity_Name FROM Charity");
    return charity;
}

double CharityComponent::donateCharity(QString idBankcard, double amount, QString Charity_Name) //Make donation transaction
{
    idAccount = getAccount(idBankcard);
    double newBalance = 0.0;

    QSqlQuery prepAccBalance;
    prepAccBalance.prepare("SELECT Balance FROM Account WHERE idAccount = :idAccount");
    prepAccBalance.bindValue(0, idAccount);
    prepAccBalance.exec();
    while (prepAccBalance.next()) {
        balance = prepAccBalance.value(0).toDouble();
        newBalance = balance - amount;
    }

    QSqlQuery updateBalance;
    updateBalance.prepare("UPDATE Account SET Balance = :newBalance WHERE idAccount = :idAccount");
    updateBalance.bindValue(0, newBalance);
    updateBalance.bindValue(1, idAccount);
    updateBalance.exec();

    amount = -amount;
    QSqlQuery addDonationEvent;
    addDonationEvent.prepare("INSERT INTO Event (Datetime, Transaction_Value, idAccount, Recipient)"
                             "VALUES (now(), :amount, :idAccount, :Charity_Name)");
    addDonationEvent.bindValue(0, amount);
    addDonationEvent.bindValue(1, idAccount);
    addDonationEvent.bindValue(2, Charity_Name);
    addDonationEvent.exec();

    return newBalance;

}

int CharityComponent::getAccount(QString idBankcard)    //fetches idAccount with idBankcard
{
    QString queryGetCustomer = QString("SELECT idCustomer FROM Bankcard WHERE idBankcard = '%1'").arg(idBankcard);
    QSqlQuery query(queryGetCustomer);
    while(query.next())
        {
        idCustomer = query.value(0).toInt();
        }
    QString queryGetAccount = QString("SELECT idAccount FROM Account WHERE idCustomer = %1").arg(idCustomer);
    query.exec(queryGetAccount);
    while(query.next())
        {
        idAccount = query.value(0).toInt();
        return idAccount;
        }

    return 0;
}

//this TULEE EXE:EEN
/*
void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    if (index.isValid()) {
        Charity_Name = index.data().toString();
        ui->pushButton_5->setText(Charity_Name);
    }
}
*/
