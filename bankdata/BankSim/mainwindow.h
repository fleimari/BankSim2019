#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMovie>
#include <QTimer>
#include "C:\bankdata\LoginComponent\logincomponent.h"
#include "C:\bankdata\SqlComponent\sqlcomponent.h"
#include "C:\bankdata\RfidComponent\rfidcomponent.h"
#include "C:\bankdata\CharityComponent\charitycomponent.h"
#include "menuwindow.h"
#include "balance.h"
#include "events.h"
#include "withdrawal.h"
#include "getmoney.h"
#include "receipt.h"
#include "charity.h"
#include "thankyoucard.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void loadMainImage(int image);
    void loginStatus(bool loginStatus);
    void startWindow();
    void cardLocked();
    void sessionCancel();
    void logOut();
    void timeOut();
    void testConnection();
    void readRfidCard(QString rfid);
    void openMenu();
    void openBalance();
    void openEvents();
    void openWithdrawal();
    void openCharity();
    void openGetMoney();
    void openReceipt(int receiptStatus);
    void openThankYouCard(QString donateTarget, double donateAmount);
    void getReceiptData(double balanceBefore, double withdrawal, double balanceAfter, QString receiptDate);
    void refreshTimeoutTimer();
    void updateTimeoutTimer();
    void updateConnectionTimer();

private:
    Ui::MainWindow *ui;
    MenuWindow *objectMenuWindow;
    Balance *objectBalance;
    Events *objectEvents;
    Withdrawal *objectWithdrawal;
    GetMoney *objectGetMoney;
    Receipt *objectReceipt;
    Charity *objectCharity;
    ThankYouCard *objectThankYouCard;
    LoginComponent *objectLoginComponent;
    SqlComponent *objectSqlComponent;
    RfidComponent *objectRfidComponent;
    QMovie *loadGIF;
    QTimer *timeoutTimer;
    QTimer *connectionTimer;

    bool currentSession = false;
    int loadTime = 2000;
    int timeoutTimeLeft;
    int connectionTimeLeft;
    double getWithdrawalBefore;
    double getWithdrawalAfter;
    double getWithdrawal;
    QString getReceiptDate;
    QString currentCard;
};

#endif // MAINWINDOW_H
