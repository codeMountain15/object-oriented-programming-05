// good_practice/main.cpp
//

#include <iostream>
#include <string>
#include "player.h"

using namespace std;

int main()
{
	Player player1;
	string name_input;
	int level_input, id_input;

	cout << "Type your username:\n";
	cin >> name_input;

	cout << "Type your level: \n";
	cin >> level_input;

	cout << "Type your id: \n";
	cin >> id_input;

	player1.set_username(name_input);
	player1.set_level(level_input);
	player1.set_id(id_input);

	cout << "Welcome " << player1.get_username() << "!\n";
	cout << "Your id is: " << player1.get_id()
		<< " and your level is: " 
		<< player1.get_level() << endl;


	return 0;
}
