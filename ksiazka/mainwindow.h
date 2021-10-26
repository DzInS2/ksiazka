#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "przepis.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_customContextMenuRequested(const QPoint &pos);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_pressed();

    void on_pushButton_2_pressed();

    void on_pushButton_3_pressed();

private:
    Ui::MainWindow *ui;
    przepis *przepis;
};
#endif // MAINWINDOW_H
