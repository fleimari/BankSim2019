#ifndef BALANCE_H
#define BALANCE_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QHeaderView>
#include <QString>
#include <QTableView>
#include "C:\bankdata\SqlComponent\sqlcomponent.h"
#include <QDateTime>

namespace Ui {
class Balance;
}

class Balance : public QWidget
{
    Q_OBJECT

public:
    explicit Balance(QWidget *parent = nullptr);
    ~Balance();
    void openBalance(QString sendCard);


private slots:
    void on_buttonLogout_clicked();

    void on_buttonReturnMain_clicked();

private:
    Ui::Balance *ui;
    SqlComponent *objectSqlComponent;
    QString currentCard;


};

#endif // BALANCE_H
