#include "withdrawal.h"
#include "ui_withdrawal.h"

Withdrawal::Withdrawal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Withdrawal)
{
    ui->setupUi(this);

    // Events filters
    ui->buttonAdd20->installEventFilter(this);
    ui->buttonAdd50->installEventFilter(this);
    ui->buttonAdd100->installEventFilter(this);
    ui->buttonAdd500->installEventFilter(this);
    ui->buttonDoWithdrawal->installEventFilter(this);
    ui->buttonClearWithdrawal->installEventFilter(this);

    // Objects
    objectSqlComponent = new SqlComponent;

    // Labels size/position
    ui->labelWithdrawal->resize(1780, 160);
    ui->labelWithdrawal->move(40, 20);
    ui->labelWithdrawalMessage->resize(640, 50);
    ui->labelWithdrawalMessage->move(610, 170);

    ui->textWithdrawal->resize(320, 125);
    ui->textWithdrawal->move(940, 260);

    // Buttons position/size
    ui->buttonLogout->resize(150, 125);
    ui->buttonLogout->move(1500, 260);
    ui->buttonReturnMenu->resize(150, 125);
    ui->buttonReturnMenu->move(1500, 840);
    int buttonY = 430;
    ui->buttonAdd20->resize(150, 125);
    ui->buttonAdd20->move(600, buttonY);
    ui->buttonAdd50->resize(150, 125);
    ui->buttonAdd50->move(770, buttonY);
    ui->buttonAdd100->resize(150, 125);
    ui->buttonAdd100->move(940, buttonY);
    ui->buttonAdd500->resize(150, 125);
    ui->buttonAdd500->move(1110, buttonY);
    ui->buttonDoWithdrawal->resize(650, 125);
    ui->buttonDoWithdrawal->move(600, 840);
    ui->buttonClearWithdrawal->resize(320, 125);
    ui->buttonClearWithdrawal->move(600, 260);

    // Buttons/labels color
    QString buttoncolor = "background-color: rgb(57, 20, 204); color: rgb(255, 255, 255);";
    ui->buttonAdd20->setStyleSheet(buttoncolor);
    ui->buttonAdd50->setStyleSheet(buttoncolor);
    ui->buttonAdd100->setStyleSheet(buttoncolor);
    ui->buttonAdd500->setStyleSheet(buttoncolor);
    ui->buttonDoWithdrawal->setStyleSheet(buttoncolor);
    ui->buttonClearWithdrawal->setStyleSheet(buttoncolor);
    ui->buttonLogout->setStyleSheet("background-color: rgb(194, 1, 1); color: rgb(255, 255, 255);");
    ui->buttonReturnMenu->setStyleSheet("background-color: rgb(73, 170, 72); color: rgb(255, 255, 255);");
    ui->labelWithdrawal->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelWithdrawalMessage->setStyleSheet("color: rgb(255, 255, 255);");
}
Withdrawal::~Withdrawal()
{
    delete ui;
    delete objectSqlComponent;
}

bool Withdrawal::eventFilter(QObject *, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonRelease)
    {
        emit signalTimeout();
        return false;
    }
    else
    {
        return false;
    }
}

// Open this window
void Withdrawal::openWindow(QString sendCard)
{
    currentCard = sendCard;
    on_buttonClearWithdrawal_clicked();

    this->showFullScreen();

    // Background image
    QPixmap bkgnd("C:/bankdata/pictures/background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

// Logout
void Withdrawal::on_buttonLogout_clicked()
{
    emit signalLogout();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}

// Return to menu
void Withdrawal::on_buttonReturnMenu_clicked()
{
    emit signalReturnMenu();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}

void Withdrawal::addValue(int valueToAdd)
{
    if (withdrawalValue + valueToAdd > maxWithdrawal)
    {
        ui->labelWithdrawalMessage->setText("Maksimi nosto on " + QString::number(maxWithdrawal) + " euroa.");
    }
    else
    {
    withdrawalValue = withdrawalValue + valueToAdd;
    ui->textWithdrawal->setText(QString::number(withdrawalValue) + "€");
    ui->labelWithdrawalMessage->setText("");
    }
}

void Withdrawal::on_buttonClearWithdrawal_clicked()
{
    withdrawalValue = 0;
    ui->textWithdrawal->setText(QString::number(withdrawalValue) + "€");
    ui->labelWithdrawalMessage->setText("");
}

void Withdrawal::on_buttonAdd20_clicked()
{
    addValue(20);
}

void Withdrawal::on_buttonAdd50_clicked()
{
    addValue(50);
}

void Withdrawal::on_buttonAdd100_clicked()
{
    addValue(100);
}

void Withdrawal::on_buttonAdd500_clicked()
{
    addValue(500);
}

void Withdrawal::on_buttonDoWithdrawal_clicked()
{
    if (withdrawalValue < 1)
    {
        ui->labelWithdrawalMessage->setText("Nostettava summa ei voi olla 0 euroa.");
    }
    else if (objectSqlComponent->checkBalance(currentCard, withdrawalValue) == false)
    {
        ui->labelWithdrawalMessage->setText("Tilillä ei ole katetta nostaa syötettyä summaa.");
    }
    else
    {
        objectSqlComponent->makeTransaction(currentCard, withdrawalValue);

        double balanceAfter = objectSqlComponent->getBalance(currentCard);
        double balanceBefore = balanceAfter + withdrawalValue;
        QString receiptDate = QDateTime::currentDateTime().toString();
        emit signalSendReceiptData(balanceBefore, withdrawalValue, balanceAfter, receiptDate);
        emit signalOpenGetMoney();
        QTimer::singleShot(closeWindow, this, SLOT(close()));
    }
}
