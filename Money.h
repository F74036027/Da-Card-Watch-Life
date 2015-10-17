#ifndef MONEY
#define MONEY
#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

class Money
{
	public:
		void set_intput(int, Human);
		
	private:
		void formula(Human);
		int purchase;
		string name;
};
#endif
