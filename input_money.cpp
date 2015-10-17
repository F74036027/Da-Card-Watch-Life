#include "input_money.h"
#include "ui_input_money.h"
#include <QDebug>
#include <QInputDialog>

input_money::input_money(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::input_money)
{
    ui->setupUi(this);
    Smoney="0";
    Input_Intmoney=0;
    ui->Textmoney->setText("");
    //Smoney=ui->money->text();
    //Imoney=Smoney.toInt();
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(I_click()));

}

input_money::~input_money()
{
    delete ui;
}




void input_money::on_pushButton_clicked()
{

    Input_Intmoney=Smoney.toInt();
    Smoney=ui->Textmoney->text();
    this->close();

}

void input_money::I_click()
{
    ui->Textmoney->setText("");
    emit For_Mainwindow(Input_Intmoney);
}
