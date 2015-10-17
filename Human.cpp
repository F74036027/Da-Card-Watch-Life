#include "Human.h"

Human::Human(QWidget * parent)
{
    brain = 100;
    money = 5000;
    body = 5;

    brain_pic = new QLabel(parent);
    body_pic = new QLabel(parent);

    set_picture();
}

void Human::set_picture()
{
    set_brain_pic();
    set_body_pic();
}

void Human::set_brain_pic()
{
        QString x = QString(":/pic/body%1.png").arg(brain);
        brain_pic->setPixmap(QPixmap(x));
}

void Human::set_body_pic()
{
        QString x = QString(":/pic/body%1.png").arg(body);
        body_pic->setPixmap(QPixmap(x));
}

