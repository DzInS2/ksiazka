#include "przepis.h"
#include "ui_przepis.h"

przepis::przepis(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przepis)
{
    ui->setupUi(this);
}

przepis::~przepis()
{
    delete ui;
}
