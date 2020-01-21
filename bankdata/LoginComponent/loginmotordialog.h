#ifndef LOGINMOTORDIALOG_H
#define LOGINMOTORDIALOG_H

#include <QDialog>
#include <QDebug>
#include "C:\bankdata\SqlComponent\sqlcomponent.h"
#include <QTimer>


namespace Ui {
class LoginMotorDialog;
}

class LoginMotorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginMotorDialog(QWidget *parent = nullptr);
    ~LoginMotorDialog();

    void addLoginNumber(QString loginNumberToAdd);
    void sendCardNumber(QString sendCard);
    bool eventFilter(QObject *, QEvent * event);

private slots:
    void on_buttonLogin_clicked();
    void on_buttonNumpad1_clicked();
    void on_buttonNumpad2_clicked();
    void on_buttonNumpad3_clicked();
    void on_buttonNumpad4_clicked();
    void on_buttonNumpad5_clicked();
    void on_buttonNumpad6_clicked();
    void on_buttonNumpad7_clicked();
    void on_buttonNumpad8_clicked();
    void on_buttonNumpad9_clicked();
    void on_buttonNumpad0_clicked();
    void on_buttonNumpadClear_clicked();
    void on_buttonCancelLogin_clicked();
    void updateTimeoutTimer();
    void startTimeoutTimer();

signals:
    void signalLoginStatus(bool loginStatus);
    void signalCancelSession();

private:
    Ui::LoginMotorDialog *ui;
    SqlComponent *objectSqlComponent;
    QTimer *timeoutTimer;

    int timeoutTimeLeft;
    int pwWrong = 0;
    QString currentCard;
    int closeWindow = 100;
};

#endif // LOGINMOTORDIALOG_H
