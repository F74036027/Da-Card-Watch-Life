#ifndef HEALTH_H
#define HEALTH_H

#include <Human.h>
#include <QString>

class Health
{
public:

    Health();
    void set_intput ( int intpu , Human human );
    void formula(Human human);

private:

    int body;
    QString name;

};

#endif // HEALTH_H
