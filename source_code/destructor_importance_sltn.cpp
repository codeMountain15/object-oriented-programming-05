// destructor_importance_sltn.cpp
//

#include <iostream>
#include <string>

using namespace std;

class Group {
	unsigned number_of_members;
	string* member_names; // points at the first element of the array

public:
	Group(int nmbr = 1);
	~Group();
	void set_m_Name(unsigned i, const string& n) { member_names[i] = n; }
	string get_m_Name(unsigned i) const { return member_names[i]; }
};

Group::Group(int nmbr) {
	cout << "Constructor activated\n" << endl;
	number_of_members = nmbr;
	member_names = new string[nmbr];
} // Dynamic memory allocation

Group::~Group() {
	cout << "Destructor activated\n" << endl;
	delete[]member_names;
}

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

	the_function();

	return 1;
}
