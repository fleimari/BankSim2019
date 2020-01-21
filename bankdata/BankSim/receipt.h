#ifndef RECEIPT_H
#define RECEIPT_H

#include <QWidget>
#include <QDebug>
#include <QTimer>

namespace Ui {
class Receipt;
}

class Receipt : public QWidget
{
    Q_OBJECT

public:
    explicit Receipt(QWidget *parent = nullptr);
    ~Receipt();

    void openWindow(int receiptStatus, double balanceBefore, double withdrawal, double balanceAfter, QString receiptDate);

private slots:
    void on_buttonLogout_clicked();
    void on_buttonReturnMenu_clicked();

signals:
    void signalLogout();
    void signalReturnMenu();

private:
    Ui::Receipt *ui;

    int closeWindow = 100;
};

#endif // RECEIPT_H
