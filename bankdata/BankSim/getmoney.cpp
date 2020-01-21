#include "getmoney.h"
#include "ui_getmoney.h"

GetMoney::GetMoney(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GetMoney)
{
    ui->setupUi(this);

    // Events filters
    ui->buttonReceiptNo->installEventFilter(this);
    ui->buttonReceiptYes->installEventFilter(this);

    // Objects
    loadMoney = new QMovie("C:/bankdata/pictures/loadmoney.gif");

    // Labels size/position
    ui->labelGetMoneyText->resize(1780, 160);
    ui->labelGetMoneyText->move(40, 20);
    ui->labelGetMoneyImage->resize(880, 540);
    ui->labelGetMoneyImage->move(500, 200);

    // Labels/buttons color
    QString buttoncolor = "background-color: rgb(57, 20, 204); color: rgb(255, 255, 255);";
    ui->buttonReceiptNo->setStyleSheet(buttoncolor);
    ui->buttonReceiptYes->setStyleSheet(buttoncolor);
    ui->buttonReceiptPaper->setStyleSheet(buttoncolor);
    ui->buttonReceiptScreen->setStyleSheet(buttoncolor);
    ui->labelAskReceipt->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelGetMoneyText->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelAskReceiptScreenOrPaper->setStyleSheet("color: rgb(255, 255, 255);");

    // GroupBoxes position/size
    ui->groupAskReceipt->resize(600, 250);
    ui->groupAskReceipt->move(660, 760);
    ui->groupReceiptScreenOrPaper->resize(600, 250);
    ui->groupReceiptScreenOrPaper->move(660, 760);
    ui->groupAskReceipt->setStyleSheet("border: none");
    ui->groupReceiptScreenOrPaper->setStyleSheet("border: none");

    // (inside GroupBoxes) Labels position/size
    ui->labelAskReceipt->resize(600, 50);
    ui->labelAskReceipt->move(0, 20);
    ui->labelAskReceiptScreenOrPaper->resize(600, 50);
    ui->labelAskReceiptScreenOrPaper->move(0, 20);

    // (inside GroupBoxes) Buttons position/size
    ui->buttonReceiptYes->resize(150, 125);
    ui->buttonReceiptYes->move(80, 80);
    ui->buttonReceiptNo->resize(150, 125);
    ui->buttonReceiptNo->move(360, 80);
    ui->buttonReceiptScreen->resize(150, 125);
    ui->buttonReceiptScreen->move(80, 80);
    ui->buttonReceiptPaper->resize(150, 125);
    ui->buttonReceiptPaper->move(360, 80);
}

GetMoney::~GetMoney()
{
    delete ui;
}

bool GetMoney::eventFilter(QObject *, QEvent *event)
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
void GetMoney::openWindow()
{
    // Money coming image
    ui->labelGetMoneyImage->setMovie(loadMoney);
    loadMoney->start();

    ui->labelGetMoneyText->setText("Rahat tulossa...");
    ui->groupAskReceipt->hide();
    ui->groupReceiptScreenOrPaper->hide();

    this->showFullScreen();

    // Background image
    QPixmap bkgnd("C:/bankdata/pictures/background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    QTimer::singleShot(2000, this, SLOT(askReceipt()));
}

void GetMoney::askReceipt()
{
    // Take money image
    QPixmap getMoneyPic("C:/bankdata/pictures/takemoney.png");
    int mainPicHeight = ui->labelGetMoneyImage->height();
    int mainPicWidth = ui->labelGetMoneyImage->width();
    ui->labelGetMoneyImage->setPixmap(getMoneyPic.scaled(mainPicWidth, mainPicHeight, Qt::KeepAspectRatio));

    ui->labelGetMoneyText->setText("Ota rahat...");
    ui->groupAskReceipt->show();
}

// Yes receipt
void GetMoney::on_buttonReceiptYes_clicked()
{
    ui->groupAskReceipt->hide();
    ui->groupReceiptScreenOrPaper->show();
}

// No receipt
void GetMoney::on_buttonReceiptNo_clicked()
{
    emit signalOpenMenu();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}

// Print receipt to screen
void GetMoney::on_buttonReceiptScreen_clicked()
{
    emit signalPrintReceipt(1);
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}

// Print receipt to paper
void GetMoney::on_buttonReceiptPaper_clicked()
{
    emit signalPrintReceipt(2);
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}
