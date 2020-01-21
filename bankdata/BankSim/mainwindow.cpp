#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->showFullScreen();

    // Background image
    QPixmap bkgnd("C:/bankdata/pictures/background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    // Labels size/position
    ui->labelMainText->resize(1780, 160);
    ui->labelMainText->move(40, 20);
    ui->labelMainImage->resize(880, 640);
    ui->labelMainImage->move(500, 200);
    ui->labelConnectionText->resize(1250, 50);
    ui->labelConnectionText->move(310, 920);

    // Labels color
    ui->labelConnectionText->setStyleSheet("color: #ff000c");
    ui->labelMainText->setStyleSheet("color: rgb(255, 255, 255);");

    // Objects
    objectMenuWindow = new MenuWindow;
    objectBalance = new Balance;
    objectEvents = new Events;
    objectWithdrawal = new Withdrawal;
    objectGetMoney = new GetMoney;
    objectReceipt = new Receipt;
    objectCharity = new Charity;
    objectThankYouCard = new ThankYouCard;
    objectLoginComponent = new LoginComponent;
    objectSqlComponent = new SqlComponent;
    objectRfidComponent = new RfidComponent;
    loadGIF = new QMovie("C:/bankdata/pictures/load.gif");
    timeoutTimer = new QTimer;
    connectionTimer = new QTimer;

    // Connections
    // *** LoginComponent
    connect(objectLoginComponent, SIGNAL(signalLoginStatus(bool)), this, SLOT(loginStatus(bool))); // Login-component -> MAIN (send loginstatus true or false)
    connect(objectLoginComponent, SIGNAL(signalCancelSession()), this, SLOT(sessionCancel())); // Login-component -> MAIN (cancel session)
    // *** Menu
    connect(objectMenuWindow, SIGNAL(signalLogout()), this, SLOT(logOut())); // Menu -> MAIN (logout)
    connect(objectMenuWindow, SIGNAL(signalOpenBalance()), this, SLOT(openBalance())); // Menu -> MAIN (open balance window)
    connect(objectMenuWindow, SIGNAL(signalOpenEvents()), this, SLOT(openEvents())); // Menu -> MAIN (open events window)
    connect(objectMenuWindow, SIGNAL(signalOpenWithdrawal()), this, SLOT(openWithdrawal())); // Menu -> MAIN (open withdrawal window)
    connect(objectMenuWindow, SIGNAL(signalOpenCharity()), this, SLOT(openCharity())); // Menu -> MAIN (open charity window)
    // *** Withdrawal
    connect(objectWithdrawal, SIGNAL(signalOpenGetMoney()), this, SLOT(openGetMoney())); // Withdrawal -> MAIN (open giving money/takemoney window)
    connect(objectWithdrawal, SIGNAL(signalSendReceiptData(double, double, double, QString)), this, SLOT(getReceiptData(double, double, double, QString))); // Withdrawal -> MAIN (send receipt data)
    connect(objectWithdrawal, SIGNAL(signalLogout()), this, SLOT(logOut())); // Withdrawal -> MAIN (logout)
    connect(objectWithdrawal, SIGNAL(signalReturnMenu()), this, SLOT(openMenu())); // Withdrawal -> MAIN (return to menu window)
    // *** Giving money/takemoney
    connect(objectGetMoney, SIGNAL(signalOpenMenu()), this, SLOT(openMenu())); // GetMoney -> MAIN (open menu window)
    // *** Balance
    connect(objectBalance, SIGNAL(signalLogout()), this, SLOT(logOut())); // Balance -> MAIN (logout)
    connect(objectBalance, SIGNAL(signalReturnMenu()), this, SLOT(openMenu())); // Balance -> MAIN (return to menu window)
    // *** Events
    connect(objectEvents, SIGNAL(signalLogout()), this, SLOT(logOut())); // Events -> MAIN (logout)
    connect(objectEvents, SIGNAL(signalReturnMenu()), this, SLOT(openMenu())); // Events -> MAIN (return to menu window)
    // *** Giving money/takemoney
    connect(objectGetMoney, SIGNAL(signalOpenMenu()), this, SLOT(openMenu())); // GetMoney -> MAIN (open menu window)
    connect(objectGetMoney, SIGNAL(signalPrintReceipt(int)), this, SLOT(openReceipt(int))); // GetMoney -> Main (open receipt)
    // *** Receipt
    connect(objectReceipt, SIGNAL(signalLogout()), this, SLOT(logOut())); // Receipt -> MAIN (logout)
    connect(objectReceipt, SIGNAL(signalReturnMenu()), this, SLOT(openMenu())); // Receipt -> MAIN (return to menu window)
    // *** Charity
    connect(objectCharity, SIGNAL(signalLogout()), this, SLOT(logOut())); // Charity -> MAIN (logout)
    connect(objectCharity, SIGNAL(signalReturnMenu()), this, SLOT(openMenu())); // Charity -> MAIN (return to menu window)
    connect(objectCharity, SIGNAL(signalOpenThankYouCard(QString, double)), this, SLOT(openThankYouCard(QString, double))); // Charity -> MAIN (return to menu window)
    // *** ThankYouCard
    connect(objectThankYouCard, SIGNAL(signalLogout()), this, SLOT(logOut())); // ThankYouCard -> MAIN (logout)
    connect(objectThankYouCard, SIGNAL(signalReturnMenu()), this, SLOT(openMenu())); // ThankYouCard -> MAIN (return to menu window)
    // *** Timeout signals
    connect(objectMenuWindow, SIGNAL(signalTimeout()), this, SLOT(refreshTimeoutTimer())); // Menu -> MAIN (timeout trigger)
    connect(objectWithdrawal, SIGNAL(signalTimeout()), this, SLOT(refreshTimeoutTimer())); // Withdrawal -> MAIN (timeout trigger)
    connect(objectGetMoney, SIGNAL(signalTimeout()), this, SLOT(refreshTimeoutTimer())); // GetMoney -> MAIN (timeout trigger)
    connect(objectCharity, SIGNAL(signalTimeout()), this, SLOT(refreshTimeoutTimer())); // Charity -> MAIN (timeout trigger)
    // *** Timers
    connect(timeoutTimer, SIGNAL(timeout()), this, SLOT(updateTimeoutTimer())); // Timeout timer
    connect(connectionTimer, SIGNAL(timeout()), this, SLOT(updateConnectionTimer())); // Connection timer

    connect(objectRfidComponent, SIGNAL(signalFromRfid(QString)), this, SLOT(readRfidCard(QString)));

    startWindow();
    objectRfidComponent->callRfidComponent();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete objectMenuWindow;
    delete objectBalance;
    delete objectWithdrawal;
    delete objectGetMoney;
    delete objectReceipt;
    delete objectCharity;
    delete objectThankYouCard;
    delete objectLoginComponent;
    delete objectSqlComponent;
    delete objectRfidComponent;
    delete loadGIF;
    delete timeoutTimer;
    delete connectionTimer;
}

void MainWindow::readRfidCard(QString rfid)
{
    currentCard = rfid;
    //rfidNumber = objectRfidComponent->readRfid();
    qDebug() << "Main cardnumber: " << rfid;
    if (currentSession == false)
    {
        if (rfid == "Virhe")
        {
            ui->labelMainText->setText("Korttia ei pystytty lukemaan.");
            QTimer::singleShot(loadTime, this, SLOT(startWindow()));
        }
        else if (objectSqlComponent->checkCard(currentCard) == false)
        {
            ui->labelMainText->setText("Kortilla ei löytynyt asiakkuutta.");
            QTimer::singleShot(loadTime, this, SLOT(startWindow()));
        }
        else if (objectSqlComponent->getStatus(currentCard) == false)
        {
            ui->labelMainText->setText("Tämä kortti on lukittu.");
            QTimer::singleShot(loadTime, this, SLOT(startWindow()));
        }
        else
        {
            currentSession = true;
            objectLoginComponent->callLoginComponent(currentCard);
        }
    }
}

// Load starting window image (insert card and load images)
void MainWindow::loadMainImage(int image)
{
    timeoutTimer->stop();
    if (image == 1) // Insert card image
    {
        QPixmap mainPic("C:/bankdata/pictures/bankcard.png");
        int mainPicHeight = ui->labelMainImage->height();
        int mainPicWidth = ui->labelMainImage->width();
        ui->labelMainImage->setPixmap(mainPic.scaled(mainPicWidth, mainPicHeight, Qt::KeepAspectRatio));
    }
    else if (image == 2) // Load image
    {

        ui->labelMainImage->setMovie(loadGIF);
        loadGIF->start();
    }
    else if (image == 3) // Disconnected image
    {
        QPixmap mainPic("C:/bankdata/pictures/disconnected.png");
        int mainPicHeight = ui->labelMainImage->height();
        int mainPicWidth = ui->labelMainImage->width();
        ui->labelMainImage->setPixmap(mainPic.scaled(mainPicWidth, mainPicHeight, Qt::KeepAspectRatio));
    }
}

// SLOT to check if login PIN is true or false
void MainWindow::loginStatus(bool loginStatus)
{
    if (loginStatus == true)
    {
        loadMainImage(2);
        ui->labelMainText->setText("Sisäänkirjautuminen onnistui.");
        QTimer::singleShot(loadTime, this, SLOT(openMenu()));
    }
    else if (loginStatus == false)
    {
        loadMainImage(2);
        ui->labelMainText->setText("Syötit PIN-koodin kolme kertaa väärin. Kortti lukittiin.");
        QTimer::singleShot(loadTime, this, SLOT(cardLocked()));
    }

}

// Open menu window
void MainWindow::openMenu()
{
    objectMenuWindow->openWindow();
    refreshTimeoutTimer();
}

// Open balance window
void MainWindow::openBalance()
{
    objectBalance->openWindow(currentCard);
    refreshTimeoutTimer();
}

// Open events window
void MainWindow::openEvents()
{
    objectEvents->openWindow(currentCard);
    refreshTimeoutTimer();
}

// Open withdrawal window
void MainWindow::openWithdrawal()
{
    objectWithdrawal->openWindow(currentCard);
    refreshTimeoutTimer();
}

// Open charity window
void MainWindow::openCharity()
{
    objectCharity->openWindow(currentCard);
    refreshTimeoutTimer();
}

// Open giving money/takemoney screen
void MainWindow::openGetMoney()
{
    objectGetMoney->openWindow();
    refreshTimeoutTimer();
}

// Get data for receipt
void MainWindow::getReceiptData(double balanceBefore, double withdrawal, double balanceAfter, QString receiptDate)
{
    getWithdrawalBefore = balanceBefore;
    getWithdrawalAfter = balanceAfter;
    getWithdrawal = withdrawal;
    getReceiptDate = receiptDate;
}

// Open receipt window
void MainWindow::openReceipt(int receiptStatus)
{
    objectReceipt->openWindow(receiptStatus, getWithdrawalBefore, getWithdrawal, getWithdrawalAfter, getReceiptDate);
    refreshTimeoutTimer();
}

// Open Thankyoucard window
void MainWindow::openThankYouCard(QString donateTarget, double donateAmount)
{
    objectThankYouCard->openWindow(donateTarget, donateAmount);
    refreshTimeoutTimer();
}

// Check if we have connection to database
void MainWindow::testConnection()
{
    if (objectSqlComponent->SqlConnect() == false)
    {
        loadMainImage(3);
        ui->labelMainText->setText("Yhteysongelma");
        ui->labelConnectionText->setText("Yhteyden muodostaminen epäonnistui...");
        connectionTimer->start(1000);
        connectionTimeLeft = 6;
    }
}

// Starting window SLOT
void MainWindow::startWindow()
{
    loadMainImage(1);
    ui->labelMainText->setText("Syötä kortti");
    currentSession = false;
    ui->labelConnectionText->setText(" ");
    testConnection();
}

// Card locked SLOT
void MainWindow::cardLocked()
{
    loadMainImage(2);
    objectSqlComponent->lockStatus(currentCard);
    QTimer::singleShot(loadTime, this, SLOT(startWindow()));
}

// Session cancel SLOT
void MainWindow::sessionCancel()
{
    loadMainImage(2);
    ui->labelMainText->setText("Istunto keskeytettiin.");
    QTimer::singleShot(loadTime, this, SLOT(startWindow()));
}

// Logout SLOT
void MainWindow::logOut()
{
    loadMainImage(2);
    ui->labelMainText->setText("Kirjaudutaan ulos.");
    QTimer::singleShot(loadTime, this, SLOT(startWindow()));
}

// Timeout SLOT
void MainWindow::timeOut()
{
    loadMainImage(2);
    ui->labelMainText->setText("Automaattinen uloskirjautuminen (30 sekuntia).");
    QTimer::singleShot(loadTime, this, SLOT(startWindow()));
}

// Refresh timeout timer SLOT
void MainWindow::refreshTimeoutTimer()
{
    timeoutTimeLeft = 30;
    timeoutTimer->start(1000);
}

// Update timeout timer SLOT
void MainWindow::updateTimeoutTimer()
{
    if (timeoutTimeLeft == 0)
    {
        objectMenuWindow->close();
        objectBalance->close();
        objectEvents->close();
        objectWithdrawal->close();
        objectCharity->close();
        objectGetMoney->close();
        objectReceipt->close();
        objectThankYouCard->close();
        timeOut();
    }
    else
    {
        --timeoutTimeLeft;
    }
}

void MainWindow::updateConnectionTimer()
{
    if (connectionTimeLeft == 0)
    {
        connectionTimer->stop();
        startWindow();
    }
    else
    {
        --connectionTimeLeft;
        if (connectionTimeLeft != 0)
        {
            QString connText = QString("Yhteyden muodostaminen epäonnistui...yritetään uudelleen %1 sekunnin kuluttua...").arg(connectionTimeLeft);
            ui->labelConnectionText->setText(connText);
        }
        else
        {
            QString connText = QString("Yritetään muodostaa yhteyttä uudelleen...");
            ui->labelConnectionText->setText(connText);
        }
    }
}
