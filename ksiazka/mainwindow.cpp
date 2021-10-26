#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "przepis.h"
#include "przelicznik.h"
#include "zrodlo.h"
#include <przepis.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_pressed()
{
   class przepis przepiss;
   przepiss.setModal(true);
   przepiss.exec();

}


void MainWindow::on_pushButton_2_pressed()
{
    class przelicznik numer;
    numer.setModal(true);
    numer.exec();
}


void MainWindow::on_pushButton_3_pressed()
{
    class zrodlo zrr;
    zrr.setModal(true);
    zrr.exec();
}

