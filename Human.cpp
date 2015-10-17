#include <iostream>
#include <string>
#include "Human.h"

using namespace std;
/*
class Human
{
	public:
		Human();
		void set_picture();
	private:
		int brain; // label
		int money; // button
		int body;  // label
		Qlabel * brain_pic;
		Qlabel * body_pic;
		void set_brain_pic();
		void set_body_pic();
};
*/
Human::Human()
{
	brain = 100;
	money = 5000;	
	body = 5;
	
	brain_pic = new Qlabel();
	body_pic = new Qlabel();
	
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
