#ifndef KNOW_H
#define KNOW_H

#include <Human.h>
#include <QString>

class Know//接收click 更改大腦數值大小
{
public:

    Know();
    void set_intput ( int intput , Human human );//傳入0 更改human
    void formula(Human human);//增加數值

private:
    int brain;
   QString name;
};

#endif // KNOW_H
