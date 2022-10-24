// constructor03.cpp
//

#include <iostream>
#include <string>

using namespace std;

class Team {
	string t_name;
	unsigned short members_num;
public:
	void setName(const string& a1) { t_name = a1; }
	void set_members_num(unsigned short a2) { members_num = a2; }
	void print() { cout << "\nThe '" << t_name << "' team has "
		<< members_num << " members\n"; }
	Team(const string& a1, unsigned short a2); // Constructor
	Team(); // Pre-defined constructor
};

Team::Team(const string& a1, unsigned short a2) {
	t_name = a1; members_num = a2;
}

Team::Team() {
	t_name = "Yolo!"; members_num = 4;
}

int main() {
	Team team01; // the pre-defined constructor is activated
	team01.print();
}
