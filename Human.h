#ifndef HUMAN_H
#define HUMAN_H
#include <QLabel>
#include <QString>

class Human
{
    public:
        Human(QWidget * parent);
        void set_picture();
        int brain; // label
        int money; // button
        int body;  // label
    private:
        QLabel * brain_pic;
        QLabel * body_pic;
        void set_brain_pic();
        void set_body_pic();
};

#endif // HUMAN_H
