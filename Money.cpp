#include "Money.h"

void Money::set_intput(int intput, Human human)
{
    purchase = intput;
    formula(human);
}

void Money::formula(Human human)
{
    human.money -= purchase;
    human.set_picture();
}
