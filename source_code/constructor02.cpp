// constructor02.cpp
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
};

Team::Team(const string& a1, unsigned short a2) {
	t_name = a1; members_num = a2;
}

int main() {
	// Team team01; // Error!
	Team team01 = Team("Gardouba funs", 5); // the constructor is activated
	team01.print();
}
