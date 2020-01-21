#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include "C:\bankdata\SqlComponent\sqlcomponent.h"
#include "C:\bankdata\ViewSqlComponent\viewsqlcomponent.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void hideAccount();
    void hideBankcard();
    void showAccount();
    void showBankcard();

private slots:
    void on_listViewAccounts_clicked(const QModelIndex &index);
    void on_listViewBankcards_clicked(const QModelIndex &index);
    void on_buttonCardStatus_clicked();
    void on_buttonNewBalance_clicked();
    void on_buttonNewPin_clicked();

private:
    Ui::MainWindow *ui;
    QStringListModel *accountModel;
    QStringListModel *bankcardModel;

    SqlComponent *objectSqlComponent;
    ViewSqlComponent * objectViewSqlComponent;

    QString dataAccount;
    QString dataBankcard;
};

#endif // MAINWINDOW_H
