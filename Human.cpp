#include "Human.h"

Human::Human(QWidget * parent)
{
    brain = 2;
    money = 0;
    body = 2;//1~10



    brain_pic = new QLabel;
    body_pic = new QLabel;

    brain_pic->setGeometry(780,30,211,81);
    body_pic->setGeometry(110,30,151,141);

    set_picture();
}

void Human::set_picture()
{
    set_brain_pic();
    set_body_pic();
}

void Human::set_brain_pic()
{
//        QString x = QString(":/pic/brain%1.png").arg(brain);
//        brain_pic->setPixmap(QPixmap(x));
    switch (brain) {
    case 0:
        brain_pic->setPixmap(QPixmap(":/brain0.png"));
        break;
    case 1:
        brain_pic->setPixmap(QPixmap(":/brain1.png"));
        break;
    case 2:
        brain_pic->setPixmap(QPixmap(":/brain2.png"));
        break;
    case 3:
        brain_pic->setPixmap(QPixmap(":/brain3.png"));
        break;
    case 4:
        brain_pic->setPixmap(QPixmap(":/brain4.png"));
        break;
    default:
        //brain_pic->setPixmap(QPixmap(":/brain1.png"));
        break;
    }
}

void Human::set_body_pic()
{
//        QString x = QString(":/pic/body%1.png").arg(body);
//        body_pic->setPixmap(QPixmap(x));
    switch (body) {
    case 0:
        body_pic->setPixmap(QPixmap(":/body0.png"));
        break;
    case 1:
        body_pic->setPixmap(QPixmap(":/body1.png"));
        break;
    case 2:
        body_pic->setPixmap(QPixmap(":/body2.png"));
        break;
    case 3:
        body_pic->setPixmap(QPixmap(":/body3.png"));
        break;
    case 4:
        body_pic->setPixmap(QPixmap(":/body4.png"));
        break;
    case 5:
        body_pic->setPixmap(QPixmap(":/body5.png"));
        break;
    case 6:
        body_pic->setPixmap(QPixmap(":/body6.png"));
        break;
    case 7:
        body_pic->setPixmap(QPixmap(":/body7.png"));
        break;
    case 8:
        body_pic->setPixmap(QPixmap(":/body8.png"));
        break;
    case 9:
        body_pic->setPixmap(QPixmap(":/body9.png"));
        break;
    default:
        //body_pic->setPixmap(QPixmap(":/body1.png"));
        break;
    }
}

