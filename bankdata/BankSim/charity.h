#ifndef CHARITY_H
#define CHARITY_H

#include <QWidget>
#include <QDebug>
#include <QTimer>
#include <QTableView>
#include "C:\bankdata\SqlComponent\sqlcomponent.h"
#include "C:\bankdata\CharityComponent\charitycomponent.h"


namespace Ui {
class Charity;
}

class Charity : public QWidget
{
    Q_OBJECT

public:
    explicit Charity(QWidget *parent = nullptr);
    ~Charity();

    void openWindow(QString sendCard);
    bool eventFilter(QObject *, QEvent * event);

private slots:
    void on_buttonLogout_clicked();
    void on_buttonReturnMenu_clicked();
    void on_tableViewCharity_clicked(const QModelIndex &index);
    void on_buttonDonateComplete_clicked();
    void on_buttonDonate5_clicked();
    void on_buttonDonate10_clicked();
    void on_buttonDonate20_clicked();

signals:
    void signalLogout();
    void signalReturnMenu();
    void signalTimeout();
    void signalOpenThankYouCard(QString donateTarget, double donateAmount);

private:
    Ui::Charity *ui;

    QSqlQueryModel *tableModel;
    CharityComponent *objectCharityComponent;
    SqlComponent *objectSqlComponent;
    QTableView *tableview;

    QString currentCard;
    QString charityName;
    int closeWindow = 100;
    int donateAmount;

};

#endif // CHARITY_H
