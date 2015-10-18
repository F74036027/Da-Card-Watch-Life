#include "know.h"

Know::Know()
{



}

void Know::set_intput ( int intput , Human human )//傳入0 更改human
{
   //while button clicked
    brain=intput;
    formula(human);
}

void Know::formula(Human human)
{
    //human.brain+=brain+20;
    human.set_picture();
    //chang picture
};

