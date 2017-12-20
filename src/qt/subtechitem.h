#ifndef SUBTECHITEM_H
#define SUBTECHITEM_H

#include <QWidget>

namespace Ui {
class SUBtechitem;
}

class SUBtechitem : public QWidget
{
    Q_OBJECT

public:
    explicit SUBtechitem(QWidget *parent = 0);
    ~SUBtechitem();
    void setHost(QString hostStr);
    void setName(QString nameStr);

private:
    Ui::SUBtechitem *ui;
    QString host;
    QString name;
};

#endif // SUBTECHITEM_H
