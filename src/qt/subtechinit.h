#ifndef SUBTECHINIT_H
#define SUBTECHINIT_H

#include <QDialog>

namespace Ui {
class SUBTechInit;
}

class SUBTechInit : public QDialog
{
    Q_OBJECT

public:
    explicit SUBTechInit(QWidget *parent = 0);
    ~SUBTechInit();
    QString GetServers();
    void ShowSUBtechIntro(bool exitAfter = true);

private:
    Ui::SUBTechInit *ui;
};

#endif // SUBTECHINIT_H
