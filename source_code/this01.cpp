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

	//void destroy() { delete this; }
	void destroy() { cout << "This object is located in: " << this << endl; }

	~another_Class() { cout << "Destruction activated\n"; };
};

int main()
{
	another_Class clss;
	clss.mountain();
	clss.destroy();

	return 0;
}
