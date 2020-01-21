#include "charity.h"
#include "ui_charity.h"

Charity::Charity(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Charity)
{
    ui->setupUi(this);

    // Events filters
    ui->buttonDonate5->installEventFilter(this);
    ui->buttonDonate10->installEventFilter(this);
    ui->buttonDonate20->installEventFilter(this);
    ui->buttonDonateComplete->installEventFilter(this);
    ui->tableViewCharity->installEventFilter(this);

    // Objects
    objectCharityComponent = new CharityComponent;
    objectSqlComponent = new SqlComponent;

    // Buttons position/size
    ui->buttonLogout->resize(150, 125);
    ui->buttonLogout->move(1500, 260);
    ui->buttonReturnMenu->resize(150, 125);
    ui->buttonReturnMenu->move(1500, 840);
    ui->buttonDonate5->resize(150, 125);
    ui->buttonDonate5->move(660, 670);
    ui->buttonDonate10->resize(150, 125);
    ui->buttonDonate10->move(820, 670);
    ui->buttonDonate20->resize(150, 125);
    ui->buttonDonate20->move(980, 670);
    ui->buttonDonateComplete->resize(470, 125);
    ui->buttonDonateComplete->move(660, 840);

    // Buttons/labels color
    QString buttoncolor = "background-color: rgb(57, 20, 204); color: rgb(255, 255, 255);";
    ui->buttonDonate5->setStyleSheet(buttoncolor);
    ui->buttonDonate10->setStyleSheet(buttoncolor);
    ui->buttonDonate20->setStyleSheet(buttoncolor);
    ui->buttonDonateComplete->setStyleSheet(buttoncolor);
    ui->buttonLogout->setStyleSheet("background-color: rgb(194, 1, 1); color: rgb(255, 255, 255);");
    ui->buttonReturnMenu->setStyleSheet("background-color: rgb(73, 170, 72); color: rgb(255, 255, 255);");
    ui->label_1->setStyleSheet("color: rgb(255, 255, 255);");
    ui->label_2->setStyleSheet("color: rgb(255, 255, 255);");
    ui->label_3->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelCharity->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelErrorText->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelCharityName->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelCharityAmount->setStyleSheet("color: rgb(255, 255, 255);");

    // Labels position/size
    ui->labelCharity->resize(800, 160);
    ui->labelCharity->move(400, 20);
    ui->label_1->resize(500, 50);
    ui->label_1->move(660, 210);
    ui->label_2->resize(220, 50);
    ui->label_2->move(660, 520);
    ui->label_3->resize(220, 50);
    ui->label_3->move(660, 600);
    ui->labelCharityName->resize(220, 50);
    ui->labelCharityName->move(970, 520);
    ui->labelCharityAmount->resize(220, 50);
    ui->labelCharityAmount->move(970, 600);
    ui->labelErrorText->resize(660, 50);
    ui->labelErrorText->move(660, 800);

    // TableView position/size
    ui->tableViewCharity->resize(470, 240);
    ui->tableViewCharity->move(660, 260);
    ui->tableViewCharity->horizontalHeader()->hide();
    ui->tableViewCharity->verticalHeader()->hide();

    // TableView color
    ui->tableViewCharity-> setStyleSheet("background-color: rgb(57, 20, 204); color: rgb(255, 255, 255)");
}

Charity::~Charity()
{
    delete ui;
    delete objectCharityComponent;
    delete objectSqlComponent;
}

bool Charity::eventFilter(QObject *, QEvent *event)
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

void Charity::on_tableViewCharity_clicked(const QModelIndex &index)
{
    ui->labelErrorText->setText(" ");
    if (index.isValid()) {
        charityName = index.data().toString();
        ui->labelCharityName->setText(charityName);
    }
}
void Charity::openWindow(QString sendCard)
{
    currentCard = sendCard;
    donateAmount = 0;
    ui->labelCharityAmount->setText("<ei valittu>");
    ui->labelCharityName->setText("<ei valittu>");
    ui->labelErrorText->setText(" ");
    tableModel = objectCharityComponent->getCharity();

    tableModel->setHeaderData(0, Qt::Horizontal, QObject::tr("Kohteet"));
    ui->tableViewCharity->setModel(tableModel);

    ui->tableViewCharity->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableViewCharity->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableViewCharity->resizeColumnsToContents();
    ui->tableViewCharity->resizeRowsToContents();
    ui->tableViewCharity->setSelectionMode(QAbstractItemView::NoSelection);

    this->showFullScreen();

    // Background image
    QPixmap bkgnd("C:/bankdata/pictures/background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

void Charity::on_buttonDonateComplete_clicked()
{
    if (donateAmount < 5)
    {
        ui->labelErrorText->setText("Valitse lahjoitettava summa.");
    }
    else if (charityName.length() < 1)
    {
        ui->labelErrorText->setText("Valitse lahjoituskohde.");
    }
    else if (objectSqlComponent->checkBalance(currentCard, donateAmount) == false)
    {
        ui->labelErrorText->setText("Tilillä ei ole katetta tehdä lahjoitusta.");
    }
    else
    {
    objectCharityComponent->donateCharity(currentCard,donateAmount,charityName);
    emit signalOpenThankYouCard(charityName, donateAmount);
    QTimer::singleShot(closeWindow, this, SLOT(close()));
    }
}

void Charity::on_buttonDonate5_clicked()
{
    ui->labelErrorText->setText(" ");
    donateAmount = 5;
    ui->labelCharityAmount->setText(QString::number(donateAmount)+"€");
}

void Charity::on_buttonDonate10_clicked()
{
    ui->labelErrorText->setText(" ");
    donateAmount = 10;
    ui->labelCharityAmount->setText(QString::number(donateAmount)+"€");
}

void Charity::on_buttonDonate20_clicked()
{
    ui->labelErrorText->setText(" ");
    donateAmount = 20;
    ui->labelCharityAmount->setText(QString::number(donateAmount)+"€");
}

// Logout
void Charity::on_buttonLogout_clicked()
{
    emit signalLogout();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}

// Return to menu
void Charity::on_buttonReturnMenu_clicked()
{
    emit signalReturnMenu();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}
