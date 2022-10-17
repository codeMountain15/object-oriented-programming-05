// do_while01.cpp
//

#include <iostream>

using namespace std;

int main() {

	int num = 0;

	// it executes the first loop
	// and then it checks if there
	// will enter the next loop

	do {
		cout << num << "\n";
		num++;
	} while (num < 10);

}
