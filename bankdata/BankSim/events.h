#ifndef EVENTS_H
#define EVENTS_H

#include <QWidget>
#include <QDebug>
#include <QTimer>
#include <QTableView>
#include "C:\bankdata\SqlComponent\sqlcomponent.h"
#include "doubledelegate.h"


namespace Ui {
class Events;
}

class Events : public QWidget
{
    Q_OBJECT

public:
    explicit Events(QWidget *parent = nullptr);
    ~Events();

    void openWindow(QString sendCard);

signals:
    void signalLogout();
    void signalReturnMenu();

private slots:
    void on_buttonLogout_clicked();
    void on_buttonReturnMenu_clicked();

private:
    Ui::Events *ui;
    SqlComponent *objectSqlComponent;
    QTableView *tableview;
    QSqlQueryModel *tableModel;

    QString currentCard;
    int closeWindow = 100;
};

#endif // EVENTS_H
