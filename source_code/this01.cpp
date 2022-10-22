// this01.cpp
//

#include<iostream>
using namespace std;

class another_Class
{
private:
	int x, y;

public:
	another_Class(int x = 0, int y = 0) 
	{ this->x = x; this->y = y; }
	
	void sea() 
	{ cout << "Hello from the sea()\n"; }

	void mountain() 
	{ cout << "Hello from the mountain()\n"; this->sea(); }
};

int main()
{
	another_Class clss;
	clss.mountain();

	return 0;
}
