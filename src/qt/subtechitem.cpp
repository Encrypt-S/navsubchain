#include "SUBtechitem.h"
#include "ui_SUBtechitem.h"

SUBtechitem::SUBtechitem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SUBtechitem),
    host(""),
    name("")
{
    ui->setupUi(this);
}

void SUBtechitem::setHost(QString hostStr)
{
    host = hostStr;
    ui->serverHostLabel->setText(hostStr);
}

void SUBtechitem::setName(QString nameStr)
{
    name = nameStr;
    ui->serverNameLabel->setText(nameStr);
}

SUBtechitem::~SUBtechitem()
{
    delete ui;
}
