#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    man=new Human(this);
    ui->setupUi(this);
    money=0;
    showmoney=QString::number(money);
    ui->money->setAlignment(Qt::AlignCenter);
    a=new input_money;
    money=a->Input_Intmoney;
    showmoney=a->Smoney;
    qDebug()<<showmoney;
    ui->money->setText(showmoney);
    man->body_pic=ui->body;
    man->brain_pic=ui->brain;
    man->set_picture();
    connect(a,SIGNAL(For_Mainwindow(int)),this,SLOT(I_catch(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_library_clicked()
{
    man->body--;
    man->brain++;
    judge();
    man->set_picture();

}

void MainWindow::on_garbage_clicked()
{
    man->body++;
    judge();
    a->show();
}

void MainWindow::on_ground_clicked()
{
    man->body--;
    judge();
    qDebug()<<man->body<<"body";
    man->set_picture();
}

void MainWindow::on_foreat_clicked()
{
    a->show();
}

void MainWindow::I_catch(int)
{
    showmoney=a->Smoney;
    money+=showmoney.toInt();
    showmoney=QString::number(money);
    ui->money->setText(showmoney);
    judge();
    man->set_picture();
}

void MainWindow::judge()
{
    if((man->body)>9)man->body=9;
    else if((man->body)<0)man->body=0;

    if(man->brain>4)man->brain=4;
    else if(man->brain<0)man->brain=0;
}

