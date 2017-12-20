#include "SUBtechinit.h"
#include "ui_SUBtechinit.h"
#include "net.h"
#include "util.h"
#include "skinize.h"

#include <string>
#include <iostream>

#include <QStringList>
#include <QUrl>

SUBTechInit::SUBTechInit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SUBTechInit)
{
    ui->setupUi(this);
}

SUBTechInit::~SUBTechInit()
{
    delete ui;
}

void SUBTechInit::ShowSUBtechIntro(bool exitAfter)
{
    SUBTechInit SUBtechinit;
    SUBtechinit.setWindowIcon(QIcon(":icons/subchain"));
    SUBtechinit.setStyleSheet(Skinize());

    if(!SUBtechinit.exec())
    {
        if(exitAfter)
            exit(0);
        else
            return;
    }

    QString ServersToAdd = SUBtechinit.GetServers();
    QStringList ss = ServersToAdd.split('\n');

    for (int i = 0; i < ss.size(); ++i){
        QString Server = ss.at(i);
        QString strippedServer = Server.remove(' ');
        if(strippedServer != "")
        {
            WriteConfigFile("addanonserver",strippedServer.toStdString());
        }
    }
}

QString SUBTechInit::GetServers()
{
    return ui->plainTextEdit->toPlainText();
}
