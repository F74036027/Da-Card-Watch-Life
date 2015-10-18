#include "health.h"

Health::Health()
{

}

void Health::set_intput ( int intput , Human human )
{
   //while button clicked
     body=intput;
     formula(human);
}

void Health::formula(Human human)
{
    human.body+=body;
    human.set_picture();
    //chang picture
}
