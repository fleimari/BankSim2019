#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QWidget>
#include <QDebug>
#include <QTimer>

namespace Ui {
class MenuWindow;
}

class MenuWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();

    void openWindow();
    bool eventFilter(QObject *, QEvent * event);

private slots:
    void on_buttonShowBalance_clicked();
    void on_buttonShowEvents_clicked();
    void on_buttonShowWithdrawal_clicked();
    void on_buttonShowCharity_clicked();
    void on_buttonLogout_clicked();

signals:
    void signalLogout();
    void signalOpenBalance();
    void signalOpenEvents();
    void signalOpenWithdrawal();
    void signalOpenCharity();
    void signalTimeout();


private:
    Ui::MenuWindow *ui;

    int closeWindow = 100;
};

#endif // MENUWINDOW_H
