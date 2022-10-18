// vector_for01.cpp
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{	
	string str = "user";
	vector<string> v1;

	for (int i = 1; i <= 5; i++)
		v1.push_back(str + to_string(i));
		// to_string(i) transforms i content to string

	cout << "Output every content from begin->end:\n";
	for (auto j = v1.begin(); j != v1.end(); j++)
		cout << *j << endl;

	return 0;
}
