#include "zrodlo.h"
#include "ui_zrodlo.h"

zrodlo::zrodlo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zrodlo)
{
    ui->setupUi(this);
}

zrodlo::~zrodlo()
{
    delete ui;
}
