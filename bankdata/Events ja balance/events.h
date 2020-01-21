#ifndef EVENTS_H
#define EVENTS_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QHeaderView>
#include <QString>
#include <QTableView>
#include "C:\bankdata\SqlComponent\sqlcomponent.h"



namespace Ui {
class Events;
}

class Events : public QWidget
{
    Q_OBJECT

public:
    explicit Events(QWidget *parent = nullptr);
    ~Events();
    void openEvents();

private slots:
    void on_buttonLogout_clicked();

    void on_buttonReturnMain_clicked();
private:
    Ui::Events *ui;

    QSqlQueryModel *tableModel;
    SqlComponent *objectSqlComponent;
    QTableView *tableview;

};

#endif // EVENTS_H
