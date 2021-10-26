#ifndef ZRODLO_H
#define ZRODLO_H

#include <QDialog>

namespace Ui {
class zrodlo;
}

class zrodlo : public QDialog
{
    Q_OBJECT

public:
    explicit zrodlo(QWidget *parent = nullptr);
    ~zrodlo();

private:
    Ui::zrodlo *ui;
};

#endif // ZRODLO_H
