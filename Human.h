#ifndef HUMAN
#define HUMAN
#include <iostream>
#include <string>
using namespace std;

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
#endif
