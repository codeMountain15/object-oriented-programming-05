// good_practice02/main.cpp
//

#include <iostream>
#include <string>
#include "number.h"

using namespace std;

int main()
{
	int input1, input2, input3;
	int output1 = 0, output2 = 0, output3 = 0;


	cout << "Give three integers:\n";
	cin >> input1 >> input2 >> input3;

	Numbers nums(input1, input2, input3);
	nums.get_numbers(output1, output2, output3);

	cout << "The retrieved numbers are: \n" << output1 << endl << output2 << endl << output3 << endl;
	


	return 0;
}
