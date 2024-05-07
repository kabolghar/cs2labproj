#ifndef ADMINPLAT_H
#define ADMINPLAT_H

#include <QDialog>

namespace Ui {
class adminplat;
}

class adminplat : public QDialog
{
    Q_OBJECT

public:
    explicit adminplat(QWidget *parent = nullptr);
    ~adminplat();

private:
    Ui::adminplat *ui;
};

#endif // ADMINPLAT_H
