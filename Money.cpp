#include <iostream>
#include <string>
#include "Money.h"

using namespace std;
/*
class Money
{
	public:
		void set_intput(int, Human);
		
	private:
		void formula(Human);
		int purchase;
		string name;
};
*/
void Money::set_intput(int intput, Human human)
{
	purchase = intput;
	formula(human);
}

void Money::formula(Human human)
{
	human.money -= purchase;
	human.set_picture()
}

