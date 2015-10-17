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
    money=a->Input_Intmoney;
    showmoney=a->Smoney;
    qDebug()<<showmoney;
    ui->money->setText(showmoney);
    connect(a,SIGNAL(For_Mainwindow(int)),this,SLOT(I_catch(int)));
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
    a->Smoney="0";

    //ui->money->setText(showmoney);

}

void MainWindow::on_ground_clicked()
{

}

void MainWindow::on_foreat_clicked()
{

}

void MainWindow::I_catch(int)
{
    showmoney=a->Smoney;
    money+=showmoney.toInt();
    showmoney=QString::number(money);
    ui->money->setText(showmoney);
}

