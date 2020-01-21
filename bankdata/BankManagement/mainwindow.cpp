#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Objects
    objectSqlComponent = new SqlComponent;
    objectViewSqlComponent = new ViewSqlComponent;
    accountModel = new QStringListModel;
    bankcardModel = new QStringListModel;

    // Sql connection
    objectSqlComponent->SqlConnect();

    // Validators
    ui->lineNewBalance->setValidator(new QRegExpValidator(QRegExp("[1-9][0-9]{5}")));
    ui->lineNewBalance_2->setValidator(new QRegExpValidator(QRegExp("[0-9]{2}")));
    ui->lineNewPin->setValidator(new QRegExpValidator(QRegExp("[0-9]{4}")));

     // Get account list data
     QStringList accountList;
     accountList << objectViewSqlComponent->getAccounts();
     accountModel->setStringList(accountList);
     ui->listViewAccounts->setModel(accountModel);

     hideAccount();
     hideBankcard();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete accountModel;
    delete bankcardModel;
    delete objectSqlComponent;
    delete objectViewSqlComponent;
}

// Hide bankcard labels/buttons
void MainWindow::hideBankcard()
{
    ui->label_6->hide();
    ui->label_3->hide();
    ui->label_5->hide();
    ui->lineNewPin->hide();
    ui->buttonNewPin->hide();
    ui->buttonCardStatus->hide();
    ui->labelCardPin->hide();
    ui->labelCardStatus->hide();
}

// Hide account labels/buttons
void MainWindow::hideAccount()
{
    ui->label_4->hide();
    ui->buttonNewBalance->hide();
    ui->lineNewBalance->hide();
    ui->lineNewBalance_2->hide();
    ui->labelDot->hide();
}

// Show account labels/buttons
void MainWindow::showAccount()
{
    ui->label_4->show();
    ui->buttonNewBalance->show();
    ui->lineNewBalance->show();
    ui->lineNewBalance_2->show();
    ui->labelDot->show();
}

// Show bankcard labels/buttons
void MainWindow::showBankcard()
{
    ui->label_6->show();
    ui->label_3->show();
    ui->label_5->show();
    ui->lineNewPin->show();
    ui->buttonNewPin->show();
    ui->buttonCardStatus->show();
    ui->labelCardPin->show();
    ui->labelCardStatus->show();
}

// Accounts list
void MainWindow::on_listViewAccounts_clicked(const QModelIndex &index)
{
    ui->labelErrorText->setText(" ");
    ui->labelErrorText_2->setText(" ");
    ui->lineNewBalance_2->setText("00");
    dataAccount = index.data().toString();
    QStringList bankcardList;
    bankcardList << objectViewSqlComponent->getBankcards(dataAccount);
    bankcardModel->setStringList(bankcardList);
    ui->listViewBankcards->setModel(bankcardModel);

    ui->labelCustomerName->setText(objectViewSqlComponent->getName(dataAccount));
    ui->labelCustomerBalance->setText(QString::number(objectViewSqlComponent->getBalance(dataAccount), 'f', 2) + "€");

    showAccount();
    hideBankcard();
}

// Bankcards list
void MainWindow::on_listViewBankcards_clicked(const QModelIndex &index)
{
    ui->labelErrorText->setText(" ");
    ui->labelErrorText_2->setText(" ");
    dataBankcard = index.data().toString();

    if (objectSqlComponent->getStatus(dataBankcard) == true)
    {
        ui->labelCardStatus->setText("Käytössä");
        ui->buttonCardStatus->setText("Lukitse kortti");
    }
    else if (objectSqlComponent->getStatus(dataBankcard) == false)
    {
        ui->labelCardStatus->setText("Lukittu");
        ui->buttonCardStatus->setText("Aukaise kortti");
    }
    ui->labelCardPin->setText(QString::number(objectViewSqlComponent->getPin(dataBankcard)));

    showBankcard();
}

// Lock/open card
void MainWindow::on_buttonCardStatus_clicked()
{
    if (objectSqlComponent->getStatus(dataBankcard) == true)
    {
        objectViewSqlComponent->changeCardStatus(dataBankcard, 0);
        ui->labelCardStatus->setText("Lukittu");
        ui->buttonCardStatus->setText("Aukaise kortti");
    }
    else if (objectSqlComponent->getStatus(dataBankcard) == false)
    {
        objectViewSqlComponent->changeCardStatus(dataBankcard, 1);
        ui->labelCardStatus->setText("Käytössä");
        ui->buttonCardStatus->setText("Lukitse kortti");
    }
}

// Add new balance
void MainWindow::on_buttonNewBalance_clicked()
{
    ui->labelErrorText->setText(" ");
    if (ui->lineNewBalance->text() < 1)
    {
        ui->labelErrorText->setText("Et voi lähettää tyhjää kenttää");
    }
    else
    {
        double newBalance = ui->lineNewBalance->text().toDouble();
        newBalance += ui->lineNewBalance_2->text().toDouble() / 100;
        objectViewSqlComponent->updateBalance(dataAccount, newBalance);
        ui->labelCustomerBalance->setText(QString::number(objectViewSqlComponent->getBalance(dataAccount), 'f', 2) + "€");
        ui->lineNewBalance->setText(" ");
        ui->labelErrorText->setText("Uusi saldo lisätty");
        ui->lineNewBalance_2->setText("00");
    }
}

// Add new PIN-code
void MainWindow::on_buttonNewPin_clicked()
{
    ui->labelErrorText_2->setText(" ");
    if (ui->lineNewPin->text() < 1)
    {
        ui->labelErrorText_2->setText("Et voi lähettää tyhjää kenttää");
    }
    else if (ui->lineNewPin->text().length() < 4)
    {
        ui->labelErrorText_2->setText("PIN-koodi pitää olla 4 numeroa");
    }
    else
    {
        int newPin = ui->lineNewPin->text().toInt();
        objectViewSqlComponent->updatePin(dataBankcard, newPin);
        ui->labelCardPin->setText(QString::number(objectViewSqlComponent->getPin(dataBankcard)));
        ui->lineNewPin->setText(" ");
        ui->labelErrorText_2->setText("Uusi PIN lisätty");
    }
}
