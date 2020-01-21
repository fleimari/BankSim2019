#include "events.h"
#include "ui_events.h"

Events::Events(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Events)
{
    ui->setupUi(this);

    // Objects
    objectSqlComponent = new SqlComponent;
    tableview = new QTableView;
    tableModel = new QSqlQueryModel;

    // Labels size/position
    ui->labelEvents->resize(1780, 160);
    ui->labelEvents->move(40, 20);
    ui->labelPVM->resize(150, 50);
    ui->labelPVM->move(600, 210);
    ui->labelValue->resize(150, 50);
    ui->labelValue->move(845, 210);
    ui->labelReceiver->resize(150, 50);
    ui->labelReceiver->move(1095, 210);

    // TableView size/position
    ui->tableViewEvents->resize(730, 700);
    ui->tableViewEvents->move(600, 260);
    ui->tableViewEvents->horizontalHeader()->hide();
    ui->tableViewEvents->verticalHeader()->hide();

    // TableView color
    ui->tableViewEvents-> setStyleSheet("background-color: rgb(57, 20, 204); color: rgb(255, 255, 255)");

    // Buttons position/size
    ui->buttonLogout->resize(150, 125);
    ui->buttonLogout->move(1500, 260);
    ui->buttonReturnMenu->resize(150, 125);
    ui->buttonReturnMenu->move(1500, 840);

    // Buttons/labels color
    ui->buttonLogout->setStyleSheet("background-color: rgb(194, 1, 1); color: rgb(255, 255, 255);");
    ui->buttonReturnMenu->setStyleSheet("background-color: rgb(73, 170, 72); color: rgb(255, 255, 255);");
    ui->labelEvents->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelPVM->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelValue->setStyleSheet("color: rgb(255, 255, 255);");
    ui->labelReceiver->setStyleSheet("color: rgb(255, 255, 255);");
}

Events::~Events()
{
    delete ui;
    delete objectSqlComponent;
    delete tableview;
    delete tableModel;
}

// Open this window
void Events::openWindow(QString sendCard)
{
    currentCard = sendCard;
    DoubleDelegate *objectDoubleDelegate = new DoubleDelegate(ui->tableViewEvents);

    tableModel = objectSqlComponent->getEvents(currentCard);

    tableModel->setHeaderData(0, Qt::Horizontal, QObject::tr("PVM"));
    tableModel->setHeaderData(1, Qt::Horizontal, QObject::tr("SUMMA (€)"));
    tableModel->setHeaderData(2, Qt::Horizontal, QObject::tr("SAAJA"));

    ui->tableViewEvents->setModel(tableModel);
    ui->tableViewEvents->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableViewEvents->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableViewEvents->resizeColumnsToContents();
    ui->tableViewEvents->resizeRowsToContents();
    ui->tableViewEvents->setSelectionMode(QAbstractItemView::NoSelection);
    ui->tableViewEvents->setItemDelegateForColumn(1,objectDoubleDelegate);
    //ui->tableViewEvents->setEditTriggers(QAbstractItemView::NoEditTriggers);

    this->showFullScreen();

    // Background image
    QPixmap bkgnd("C:/bankdata/pictures/background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

// Logout
void Events::on_buttonLogout_clicked()
{
    emit signalLogout();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}

// Return to menu
void Events::on_buttonReturnMenu_clicked()
{
    emit signalReturnMenu();
    QTimer::singleShot(closeWindow, this, SLOT(close()));
}
