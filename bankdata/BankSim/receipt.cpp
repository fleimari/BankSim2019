#include "receipt.h"
#include "ui_receipt.h"

Receipt::Receipt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Receipt)
{
    ui->setupUi(this);

    // Labels size/position
    ui->labelReceipt->resize(800, 160);
    ui->labelReceipt->move(500, 20);
    ui->labelReceiptDate->resize(480, 50);
    ui->labelReceiptDate->move(650, 260);
    ui->label_1->resize(220, 50);
    ui->label_1->move(640, 360);
    ui->label_2->resize(220, 50);
    ui->label_2->move(640, 460);
    ui->label_3->resize(250, 50);
    ui->label_3->move(640, 560);
    ui->labelShowBalanceBefore->resize(220, 50);
    ui->labelShowBalanceBefore->move(1010, 360);
    ui->labelShowWithdrawal->resize(220, 50);
    ui->labelShowWithdrawal->move(1010, 460);
    ui->labelShowBalanceAfter->resize(220, 50);
    ui->labelShowBalanceAfter->move(1010, 560);
    ui->line->resize(550, 20);
    ui->line->move(630, 530);

    // Buttons size/position
    ui->buttonLogout->resize(150, 125);
    ui->buttonLogout->move(1500, 260);
    ui->buttonReturnMenu->resize(150, 125);
    ui->buttonReturnMenu->move(1500, 840);

    // Buttons/labels color
    ui->buttonLogout->setStyleSheet("background-color: rgb(194, 1, 1); color: rgb(255, 255, 255);");
    ui->buttonReturnMenu->setStyleSheet("background-color: rgb(73, 170, 72); color: rgb(255, 255, 255);");

    ui->label_1->setStyleSheet("color: rgb(255, 255, 255);");
    ui->label_2->setStyleSheet("color: rgb(255, 255, 255);");
    ui->label_3->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelReceipt->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelReceiptDate->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelShowWithdrawal->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelShowBalanceAfter->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelShowBalanceBefore->setStyleSheet("color: rgb(255, 255, 255);");
}

Receipt::~Receipt()
{
    delete ui;
}

// Open this window
void Receipt::openWindow(int receiptStatus, double balanceBefore, double withdrawal, double balanceAfter, QString receiptDate)
{
    this->showFullScreen();

    // Background image
    QPixmap bkgnd("C:/bankdata/pictures/background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    if (receiptStatus == 1) // Receipt to screen
    {
       ui->labelReceipt->setText("Kuitti");
    }
    else if (receiptStatus == 2) // Receipt to paper
    {
        ui->labelReceipt->setText("Kuitti (paperinen)");
    }

    ui->labelReceiptDate->setText(receiptDate);
    ui->labelShowBalanceBefore->setText(QString::number(balanceBefore, 'f', 2) + " €");
    ui->labelShowWithdrawal->setText(QString::number(withdrawal, 'f', 2) + " €");
    ui->labelShowBalanceAfter->setText(QString::number(balanceAfter, 'f', 2) + " €");
}

// Logout
void Receipt::on_buttonLogout_clicked()
{
    emit signalLogout();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}

// Return to menu
void Receipt::on_buttonReturnMenu_clicked()
{
    emit signalReturnMenu();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}

