#include "balance.h"
#include "ui_balance.h"

Balance::Balance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Balance)
{
    ui->setupUi(this);

    // Objects
    objectSqlComponent = new SqlComponent;

    // Labels position/size
    ui->labelBalance->resize(1780, 160);
    ui->labelBalance->move(40, 20);
    ui->labelBalanceDate->resize(300, 50);
    ui->labelBalanceDate->move(640, 260);
    ui->labelShowBalance->resize(300, 50);
    ui->labelShowBalance->move(1010, 360);
    ui->labelTextBalance->resize(300, 50);
    ui->labelTextBalance->move(640, 360);

    // Buttons position/size
    ui->buttonLogout->resize(150, 125);
    ui->buttonLogout->move(1500, 260);
    ui->buttonReturnMenu->resize(150, 125);
    ui->buttonReturnMenu->move(1500, 840);

    // Buttons color
    ui->buttonLogout->setStyleSheet("background-color: rgb(194, 1, 1); color: rgb(255, 255, 255);");
    ui->buttonReturnMenu->setStyleSheet("background-color: rgb(73, 170, 72); color: rgb(255, 255, 255);");
    ui->labelBalance->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelBalanceDate->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelShowBalance->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelTextBalance->setStyleSheet("color: rgb(255, 255, 255);");

}

Balance::~Balance()
{
    delete ui;
    delete objectSqlComponent;
}

// Open this window
void Balance::openWindow(QString sendCard)
{
    currentCard = sendCard;
    this->showFullScreen();

    // Background image
    QPixmap bkgnd("C:/bankdata/pictures/background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    double balance = objectSqlComponent->getBalance(currentCard);
    ui->labelBalanceDate->setText(QDateTime::currentDateTime().toString());
    ui->labelShowBalance->setText(QString::number(balance, 'f', 2) + " €");
}

// Logout
void Balance::on_buttonLogout_clicked()
{
    emit signalLogout();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}

// Return to menu
void Balance::on_buttonReturnMenu_clicked()
{
    emit signalReturnMenu();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}
