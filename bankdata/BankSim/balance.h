#ifndef BALANCE_H
#define BALANCE_H

#include <QWidget>
#include <QDebug>
#include <QTimer>
#include "C:\bankdata\SqlComponent\sqlcomponent.h"

namespace Ui {
class Balance;
}

class Balance : public QWidget
{
    Q_OBJECT

public:
    explicit Balance(QWidget *parent = nullptr);
    ~Balance();

    void openWindow(QString sendCard);

private slots:
    void on_buttonLogout_clicked();
    void on_buttonReturnMenu_clicked();

signals:
    void signalLogout();
    void signalReturnMenu();

private:
    Ui::Balance *ui;
    SqlComponent *objectSqlComponent;

    QString currentCard;
    int closeWindow = 100;
};

#endif // BALANCE_H
