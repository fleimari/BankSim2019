#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include <QWidget>
#include <QDebug>
#include <QTimer>
#include "C:\bankdata\SqlComponent\sqlcomponent.h"

namespace Ui {
class Withdrawal;
}

class Withdrawal : public QWidget
{
    Q_OBJECT

public:
    explicit Withdrawal(QWidget *parent = nullptr);
    ~Withdrawal();

    void openWindow(QString sendCard);
    void addValue(int valueToAdd);
    bool eventFilter(QObject *, QEvent * event);

private slots:
    void on_buttonLogout_clicked();
    void on_buttonReturnMenu_clicked();
    void on_buttonClearWithdrawal_clicked();
    void on_buttonAdd20_clicked();
    void on_buttonAdd50_clicked();
    void on_buttonAdd100_clicked();
    void on_buttonAdd500_clicked();
    void on_buttonDoWithdrawal_clicked();

signals:
    void signalLogout();
    void signalReturnMenu();
    void signalOpenGetMoney();
    void signalSendReceiptData(double balanceBefore, double withdrawal, double balanceAfter, QString receiptDate);
    void signalTimeout();

private:
    Ui::Withdrawal *ui;
    SqlComponent *objectSqlComponent;

    QString currentCard;
    int closeWindow = 100;
    int withdrawalValue = 0;
    int maxWithdrawal = 2000;
};

#endif // WITHDRAWAL_H
