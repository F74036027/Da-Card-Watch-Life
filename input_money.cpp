#include "input_money.h"
#include "ui_input_money.h"
#include <QDebug>
#include <QInputDialog>

input_money::input_money(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::input_money)
{
    ui->setupUi(this);
    Smoney="2222";
    //ui->money->setText(Smoney);
    //Smoney=ui->money->text();
    //Imoney=Smoney.toInt();
   // Parent = parent;

}

input_money::~input_money()
{
    delete ui;
}




void input_money::on_pushButton_clicked()
{
    //ui->money->setText(Smoney);
    Smoney=ui->money->text();

    Imoney=Smoney.toInt();
    qDebug()<<Smoney<<"000";
    //Parent->money=Imoney;
    this->close();
    //Parent->
}
