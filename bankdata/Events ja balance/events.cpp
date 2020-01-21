#include "events.h"
#include "ui_events.h"

Events::Events(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Events)
{
    ui->setupUi(this);

    objectSqlComponent = new SqlComponent;
    objectSqlComponent->SqlConnect();
    tableModel = objectSqlComponent->getEvents("0B00358EC0");

    tableModel->setHeaderData(0, Qt::Horizontal, QObject::tr("PVM"));
    tableModel->setHeaderData(1, Qt::Horizontal, QObject::tr("SUMMA (€)"));
    tableModel->setHeaderData(2, Qt::Horizontal, QObject::tr("SAAJA"));
    ui->tableViewEvents->setModel(tableModel);

    ui->tableViewEvents->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableViewEvents->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableViewEvents->move(1000,260);
    ui->tableViewEvents->resizeColumnsToContents();
    ui->tableViewEvents->resizeRowsToContents();

    ui->buttonLogout->move(1500,260);
    ui->buttonLogout->resize(150,125);
    ui->buttonReturnMain->move(1500,840);
    ui->buttonReturnMain->resize(150,125);
    ui->tableViewEvents->move(520,260);

}


Events::~Events()
{
    delete ui;

}

void Events::on_buttonLogout_clicked()
{
    this->close();
}

void Events::on_buttonReturnMain_clicked()
{
    this->close();
}
void Events::openEvents()
{
    this->showFullScreen();
    // Background image
    QPixmap bkgnd("C:/bankdata/pictures/background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}
