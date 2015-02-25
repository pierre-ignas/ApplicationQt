#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BoutonQuitter_clicked()
{
    qApp -> quit();
}

void MainWindow::on_PleinEcran_clicked(bool checked)
{
    if(checked == true)
    {
        showFullScreen();
    }
    else
    {
        showNormal();
    }
}
