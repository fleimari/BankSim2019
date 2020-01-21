#ifndef THANKYOUCARD_H
#define THANKYOUCARD_H

#include <QWidget>
#include "charity.h"

namespace Ui {
class ThankYouCard;
}

class ThankYouCard : public QWidget
{
    Q_OBJECT

public:
    explicit ThankYouCard(QWidget *parent = nullptr);
    ~ThankYouCard();
    void openWindow(QString donateTarget, double donateAmount);

private slots:
    void on_buttonLogout_clicked();
    void on_buttonReturnMenu_clicked();

signals:
    void signalLogout();
    void signalReturnMenu();

private:
    Ui::ThankYouCard *ui;

    int closeWindow = 100;
};

#endif // THANKYOUCARD_H
