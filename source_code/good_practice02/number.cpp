// good_practice02/number.cpp
//

#include <cstring>
#include <iostream>
#include "number.h"

using namespace std;

Numbers::Numbers(int a=1, int b=2, int c=3) {
	number1 = a;
	number2 = b;
	number3 = c;

	cout << "Constructor activated\n";
}

Numbers::~Numbers() {
	cout << "Destroying object\n";
}


void Numbers::get_numbers(int& a, int& b, int& c) const{
	a = number1;
	b = number2;
	c = number3;
}
