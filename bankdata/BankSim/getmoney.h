#ifndef GETMONEY_H
#define GETMONEY_H

#include <QWidget>
#include <QDebug>
#include <QTimer>
#include <QMovie>

namespace Ui {
class GetMoney;
}

class GetMoney : public QWidget
{
    Q_OBJECT

public:
    explicit GetMoney(QWidget *parent = nullptr);
    ~GetMoney();

    void openWindow();
    bool eventFilter(QObject *, QEvent * event);

private slots:
    void askReceipt();
    void on_buttonReceiptYes_clicked();
    void on_buttonReceiptNo_clicked();
    void on_buttonReceiptScreen_clicked();
    void on_buttonReceiptPaper_clicked();

signals:
    void signalOpenMenu();
    void signalPrintReceipt(int receiptStatus);
    void signalTimeout();

private:
    Ui::GetMoney *ui;
    QMovie *loadMoney;

    int closeWindow = 100;
};

#endif // GETMONEY_H
