#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //qDebug() << QSqlDatabase::drivers();
    qDebug() << "Application starts" ;
}

MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow::update_all(){

}
