#include "balance.h"
#include "ui_balance.h"

Balance::Balance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Balance)
{
    ui->setupUi(this);
    objectSqlComponent = new SqlComponent;
    objectSqlComponent->SqlConnect();

}

Balance::~Balance()
{
    delete ui;
}
void Balance::on_buttonLogout_clicked()
{
    this->close();
}

void Balance::on_buttonReturnMain_clicked()
{
    this->close();
}
void Balance::openBalance(QString sendCard)
{
    double balance = objectSqlComponent->getBalance(currentCard);

    currentCard = sendCard;
    this->showFullScreen();
    ui->labelBalanceDate->setText(QDateTime::currentDateTime().toString());
    ui->labelShowBalance->setText(QString::number(balance));
    // Background image
    QPixmap bkgnd("C:/bankdata/pictures/background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}
