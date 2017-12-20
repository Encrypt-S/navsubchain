#ifndef SUBTECHSETUP_H
#define SUBTECHSETUP_H

#include "wallet/SUBtech.h"

#include <QDialog>
#include <QVBoxLayout>

namespace Ui {
class SUBtechsetup;
}

class SUBtechsetup : public QDialog
{
    Q_OBJECT

public:
    explicit SUBtechsetup(QWidget *parent = 0);
    ~SUBtechsetup();

private:
    Ui::SUBtechsetup *ui;

public Q_SLOTS:
    void reloadSUBtechServers();
    void addSUBtechServer();
    void removeSUBtechServer();
    void getinfoSUBtechServer();
    void showButtons(bool show=true);
    void showSUBtechIntro();

};

#endif // SUBTECHSETUP_H
