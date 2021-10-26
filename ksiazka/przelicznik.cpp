#include "przelicznik.h"
#include "ui_przelicznik.h"

Przelicznik::Przelicznik(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Przelicznik)
{
    ui->setupUi(this);
}

Przelicznik::~Przelicznik()
{
    delete ui;
}
