#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    money=0;
    showmoney=QString::number(money);
    a=new input_money;
    money=a->Imoney;
    showmoney=a->Smoney;
    qDebug()<<showmoney;
    ui->money->setText(showmoney);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_library_clicked()
{

}

void MainWindow::on_garbage_clicked()
{
    a->show();
    showmoney=a->Smoney;
    ui->money->setText(showmoney);

}

void MainWindow::on_ground_clicked()
{

}

void MainWindow::on_foreat_clicked()
{

}

