#include "loginmotordialog.h"
#include "ui_loginmotordialog.h"

LoginMotorDialog::LoginMotorDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginMotorDialog)
{
    ui->setupUi(this);
    this->showFullScreen();
    qApp->installEventFilter(this);

    // Objects
    objectSqlComponent = new SqlComponent;
    timeoutTimer = new QTimer;

    // Background image
    QPixmap bkgnd("C:/bankdata/pictures/background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    // Connections
    connect(timeoutTimer, SIGNAL(timeout()), this, SLOT(updateTimeoutTimer())); // Timeout timer

    // Labels text
    ui->buttonNumpadNoUse1->setText(" ");
    ui->labelErrorText->setText(" ");

    // Buttons/labels size/position
    ui->lineEditPW->resize(150, 75);
    ui->lineEditPW->move(900, 170);
    ui->labelErrorText->resize(450, 50);
    ui->labelErrorText->move(750, 100);

    int y1 = 260;
    ui->buttonNumpad1->resize(150, 125);
    ui->buttonNumpad1->move(750, y1);
    ui->buttonNumpad2->resize(150, 125);
    ui->buttonNumpad2->move(900, y1);
    ui->buttonNumpad3->resize(150, 125);
    ui->buttonNumpad3->move(1050, y1);
    int y2 = 385;
    ui->buttonNumpad4->resize(150, 125);
    ui->buttonNumpad4->move(750, y2);
    ui->buttonNumpad5->resize(150, 125);
    ui->buttonNumpad5->move(900, y2);
    ui->buttonNumpad6->resize(150, 125);
    ui->buttonNumpad6->move(1050, y2);
    int y3 = 510;
    ui->buttonNumpad7->resize(150, 125);
    ui->buttonNumpad7->move(750, y3);
    ui->buttonNumpad8->resize(150, 125);
    ui->buttonNumpad8->move(900, y3);
    ui->buttonNumpad9->resize(150, 125);
    ui->buttonNumpad9->move(1050, y3);
    int y4 = 635;
    ui->buttonNumpadNoUse1->resize(150, 125);
    ui->buttonNumpadNoUse1->move(750, y4);
    ui->buttonNumpad0->resize(150, 125);
    ui->buttonNumpad0->move(900, y4);
    ui->buttonNumpadClear->resize(150, 125);
    ui->buttonNumpadClear->move(1050, y4);

    ui->buttonLogin->resize(450, 175);
    ui->buttonLogin->move(750, 790);

    ui->buttonCancelLogin->resize(150, 125);
    ui->buttonCancelLogin->move(1500, 260);

    // Buttons/labels color
    QString buttoncolor = "background-color: rgb(57, 20, 204); color: rgb(255, 255, 255);";
    ui->buttonNumpad0->setStyleSheet(buttoncolor);
    ui->buttonNumpad1->setStyleSheet(buttoncolor);
    ui->buttonNumpad2->setStyleSheet(buttoncolor);
    ui->buttonNumpad3->setStyleSheet(buttoncolor);
    ui->buttonNumpad4->setStyleSheet(buttoncolor);
    ui->buttonNumpad5->setStyleSheet(buttoncolor);
    ui->buttonNumpad6->setStyleSheet(buttoncolor);
    ui->buttonNumpad7->setStyleSheet(buttoncolor);
    ui->buttonNumpad8->setStyleSheet(buttoncolor);
    ui->buttonNumpad9->setStyleSheet(buttoncolor);
    ui->buttonLogin->setStyleSheet(buttoncolor);
    ui->buttonNumpadClear->setStyleSheet(buttoncolor);
    ui->buttonNumpadNoUse1->setStyleSheet(buttoncolor);

    ui->buttonCancelLogin->setStyleSheet("background-color: rgb(255, 204, 0); color: rgb(255, 255, 255);");
    ui->labelErrorText->setStyleSheet("color: rgb(255, 255, 255);");

    startTimeoutTimer();
}

LoginMotorDialog::~LoginMotorDialog()
{
    delete ui;
    delete objectSqlComponent;
    delete timeoutTimer;
}

void LoginMotorDialog::sendCardNumber(QString sendCard)
{
    currentCard = sendCard;
}

bool LoginMotorDialog::eventFilter(QObject *, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonRelease)
    {
        startTimeoutTimer();
        return false;
    }
    else
    {
        return false;
    }
}

void LoginMotorDialog::updateTimeoutTimer()
{
    if (timeoutTimeLeft == 0)
    {
        timeoutTimer->stop();
        emit signalCancelSession();
        QTimer::singleShot(closeWindow, this, SLOT(close()));
    }
    else
    {
        --timeoutTimeLeft;
    }
}

void LoginMotorDialog::startTimeoutTimer()
{
    timeoutTimeLeft = 30;
    timeoutTimer->start(1000);
}

void LoginMotorDialog::on_buttonLogin_clicked()
{
    int readPW = ui->lineEditPW->text().toInt();
    QString readPWStr = ui->lineEditPW->text();

    if (readPWStr.length() < 4)
    {
        ui->labelErrorText->setText("PIN-koodin pituus on 4 numeroa");
    }

    else if (objectSqlComponent->getPin(currentCard, readPW) == true)
    {
        emit signalLoginStatus(true);
        QTimer::singleShot(closeWindow, this, SLOT(close()));
    }
    else
    {
        pwWrong++;
        QString wrongPIN = QString::number(3 - pwWrong);
        QString str = "Väärä PIN-koodi, yrityksiä jäljellä: " + wrongPIN;
        on_buttonNumpadClear_clicked();
        ui->labelErrorText->setText(str);
        if (pwWrong == 3)
        {
            emit signalLoginStatus(false);
            QTimer::singleShot(closeWindow, this, SLOT(close()));
        }
    }
}

void LoginMotorDialog::addLoginNumber(QString loginNumberToAdd)
{
    QString readNum = ui->lineEditPW->text();
    readNum = readNum + loginNumberToAdd;
    if (readNum.length() > 4)
    {
        ui->labelErrorText->setText("PIN-koodin pituus on 4 numeroa");
    }
    else
    {
        ui->labelErrorText->setText(" ");
        ui->lineEditPW->setText(readNum);
    }
}

void LoginMotorDialog::on_buttonNumpad1_clicked()
{
    addLoginNumber("1");
}

void LoginMotorDialog::on_buttonNumpad2_clicked()
{
    addLoginNumber("2");
}

void LoginMotorDialog::on_buttonNumpad3_clicked()
{
    addLoginNumber("3");
}

void LoginMotorDialog::on_buttonNumpad4_clicked()
{
    addLoginNumber("4");
}

void LoginMotorDialog::on_buttonNumpad5_clicked()
{
    addLoginNumber("5");
}

void LoginMotorDialog::on_buttonNumpad6_clicked()
{
    addLoginNumber("6");
}

void LoginMotorDialog::on_buttonNumpad7_clicked()
{
    addLoginNumber("7");
}

void LoginMotorDialog::on_buttonNumpad8_clicked()
{
    addLoginNumber("8");
}

void LoginMotorDialog::on_buttonNumpad9_clicked()
{
    addLoginNumber("9");
}

void LoginMotorDialog::on_buttonNumpad0_clicked()
{
    addLoginNumber("0");
}

void LoginMotorDialog::on_buttonNumpadClear_clicked()
{
    ui->lineEditPW->setText("");
    ui->labelErrorText->setText(" ");
}

void LoginMotorDialog::on_buttonCancelLogin_clicked()
{
    emit signalCancelSession();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}
