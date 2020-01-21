#include "thankyoucard.h"
#include "ui_thankyoucard.h"

ThankYouCard::ThankYouCard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ThankYouCard)
{
    ui->setupUi(this);

    // Labels position/size
    ui->labelDonateImage->resize(440, 320);
    ui->labelDonateImage->move(660, 200);
    ui->labelDonateTarget->resize(800, 160);
    ui->labelDonateTarget->move(485, 500);
    ui->labelDonateText->resize(800, 50);
    ui->labelDonateText->move(485, 620);

    // Buttons position/size
    ui->buttonLogout->resize(150, 125);
    ui->buttonLogout->move(1500, 260);
    ui->buttonReturnMenu->resize(150, 125);
    ui->buttonReturnMenu->move(1500, 840);

    // Buttons/labels color
    ui->buttonLogout->setStyleSheet("background-color: rgb(194, 1, 1); color: rgb(255, 255, 255);");
    ui->buttonReturnMenu->setStyleSheet("background-color: rgb(73, 170, 72); color: rgb(255, 255, 255);");
    ui->labelDonateText->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelDonateTarget->setStyleSheet("color: rgb(255, 255, 255);");
}

ThankYouCard::~ThankYouCard()
{
    delete ui;
}
void ThankYouCard::openWindow(QString donateTarget, double donateAmount)
{
    this->showFullScreen();

    // Background image
    QPixmap bkgnd("C:/bankdata/pictures/background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    // Thankyou image
    QPixmap mainPic("C:/bankdata/pictures/donate.png");
    int mainPicHeight = ui->labelDonateImage->height();
    int mainPicWidth = ui->labelDonateImage->width();
    ui->labelDonateImage->setPixmap(mainPic.scaled(mainPicWidth, mainPicHeight, Qt::KeepAspectRatio));

    ui->labelDonateTarget->setText(donateTarget);
    ui->labelDonateText->setText("kiittää " + QString::number(donateAmount) + " euron lahjoituksestasi.");
}

// Logout
void ThankYouCard::on_buttonLogout_clicked()
{
    emit signalLogout();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}

// Return to menu
void ThankYouCard::on_buttonReturnMenu_clicked()
{
    emit signalReturnMenu();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}
