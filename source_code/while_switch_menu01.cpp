// while_switch_menu01.cpp
//

#include <iostream>

using namespace std;

int main() {

	bool exit = 0; // Flag for quitting
	
	char key;
	cout << "Press a to attack\n" 
		<< "Press b for defence\n" 
		<< "Press c to cast a spell\n" 
		<< "Press d to help your companion\n" 
		<< "Press x to exit the game\n\n";

	while (exit != 1) {
		
		cin >> key;
		
		switch (key) {
		case 'a': cout << "You attacked your opponent!\n\n";
			break;
		case 'b': cout << "You defended yourself succesfully!\n\n";
			break;
		case 'c': cout << "It's time for magic!\n\n";
			break;
		case 'd': cout << "I will help you my friend!\n\n";
			break;
		case 'x': cout << "I'm leaving the game.\n\n";
			exit = 1;
			break;
		default:
			cout << "No valid choice.\n\n";
		}
	}
}
