#ifndef PRZELICZNIK_H
#define PRZELICZNIK_H

#include <QDialog>

namespace Ui {
class Przelicznik;
}

class Przelicznik : public QDialog
{
    Q_OBJECT

public:
    explicit Przelicznik(QWidget *parent = nullptr);
    ~Przelicznik();

private:
    Ui::Przelicznik *ui;
};

#endif // PRZELICZNIK_H
