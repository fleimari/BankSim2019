#include "menuwindow.h"
#include "ui_menuwindow.h"

MenuWindow::MenuWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWindow)
{
    ui->setupUi(this);

    // Events filters
    ui->buttonShowEvents->installEventFilter(this);
    ui->buttonShowBalance->installEventFilter(this);
    ui->buttonShowCharity->installEventFilter(this);
    ui->buttonShowWithdrawal->installEventFilter(this);

    // Buttons size
    int buttonWidth = 650;
    int buttonHeight = 200;
    ui->buttonShowBalance->resize(buttonWidth, buttonHeight);
    ui->buttonShowEvents->resize(buttonWidth, buttonHeight);
    ui->buttonShowWithdrawal->resize(buttonWidth, buttonHeight);
    ui->buttonShowCharity->resize(buttonWidth, buttonHeight);
    ui->buttonLogout->resize(buttonWidth, buttonHeight);

    // Buttons location
    int buttonX = 700;
    ui->buttonShowBalance->move(buttonX, 10);
    ui->buttonShowEvents->move(buttonX, 210);
    ui->buttonShowWithdrawal->move(buttonX, 410);
    ui->buttonShowCharity->move(buttonX, 610);
    ui->buttonLogout->move(buttonX, 810);

    // Buttons style
    ui->buttonShowBalance->setStyleSheet("text-align: left; color: rgb(255, 255, 255);");
    ui->buttonShowEvents->setStyleSheet("text-align: left; color: rgb(255, 255, 255);");
    ui->buttonShowWithdrawal->setStyleSheet("text-align: left; color: rgb(255, 255, 255);");
    ui->buttonShowCharity->setStyleSheet("text-align: left; color: rgb(255, 255, 255);");
    ui->buttonLogout->setStyleSheet("text-align: left; color: rgb(255, 255, 255);");

    // Buttons icon
    QPixmap pixmap("C:/bankdata/pictures/arrow.png");
    QIcon ButtonIcon(pixmap);
    ui->buttonShowBalance->setIcon(ButtonIcon);
    ui->buttonShowBalance->setIconSize(QSize(100,100));
    ui->buttonShowEvents->setIcon(ButtonIcon);
    ui->buttonShowEvents->setIconSize(QSize(100,100));
    ui->buttonShowWithdrawal->setIcon(ButtonIcon);
    ui->buttonShowWithdrawal->setIconSize(QSize(100,100));
    ui->buttonShowCharity->setIcon(ButtonIcon);
    ui->buttonShowCharity->setIconSize(QSize(100,100));
    ui->buttonLogout->setIcon(ButtonIcon);
    ui->buttonLogout->setIconSize(QSize(100,100));
}

MenuWindow::~MenuWindow()
{
    delete ui;
}

bool MenuWindow::eventFilter(QObject *, QEvent *event)
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
void MenuWindow::openWindow()
{
    this->showFullScreen();

    // Background image
    QPixmap bkgnd("C:/bankdata/pictures/background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

void MenuWindow::on_buttonShowBalance_clicked()
{
    emit signalOpenBalance();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}

void MenuWindow::on_buttonShowEvents_clicked()
{
    emit signalOpenEvents();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}

void MenuWindow::on_buttonShowWithdrawal_clicked()
{
    emit signalOpenWithdrawal();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}

void MenuWindow::on_buttonShowCharity_clicked()
{
    emit signalOpenCharity();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}

void MenuWindow::on_buttonLogout_clicked()
{
    emit signalLogout();
    QTimer::singleShot(100, this, SLOT(close()));
}
