#ifndef PRZEPIS_H
#define PRZEPIS_H

#include <QDialog>

namespace Ui {
class przepis;
}

class przepis : public QDialog
{
    Q_OBJECT

public:
    explicit przepis(QWidget *parent = nullptr);
    ~przepis();

private:
    Ui::przepis *ui;
};

#endif // PRZEPIS_H
