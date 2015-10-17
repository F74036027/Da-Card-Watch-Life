#ifndef KNOW_H
#define KNOW_H


class Know//接收click 更改大腦數值大小
{
public:

    Know();
    void set_intput ( int intput=0 , Human human );//傳入0 更改human
    void formula(int value);//增加數值

private:
    int brain;
    string name;
};

#endif // KNOW_H

