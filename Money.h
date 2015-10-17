#ifndef MONEY_H
#define MONEY_H
#include "Human.h"
#include <QLabel>
#include <QString>

class Money
{
    public:
        void set_intput(int, Human);

    private:
        void formula(Human);
        int purchase;
        QString name;
};

#endif // MONEY_H
