// destructor_importance.cpp
//

#include <iostream>
#include <string>

using namespace std;

class Group {
	unsigned number_of_members;
	string* member_names; // points at the first element of the array

public:
	Group(int nmbr = 1);
	void set_m_Name(unsigned i, const string& n) { member_names[i] = n; }
	string get_m_Name(unsigned i) const { return member_names[i]; }
};

Group::Group(int nmbr) {
	number_of_members = nmbr;
	member_names = new string[nmbr];
} // Dynamic memory allocation

void the_function() {
	Group g1(3); // 3 elements
	g1.set_m_Name(0, "Zachos");
	g1.set_m_Name(1, "Dino");
	g1.set_m_Name(2, "Doni");
}  // When the function ends, g1 is destroyed,
  // g1.member_names pointer is also destroyed, but 
 // the space that g1.member_names pointer points at
// is not destroyed

int main() {

	cout << "Hi!\n";
	cout << "Just playing with constructors & destructors.\n";

	return 1;
}
