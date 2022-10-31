// good_practice/player.h
//

#pragma once

using namespace std;

class Player {
private:
	string username;
	int level;
	int id;

public:
	void set_username(string);
	void set_level(int);
	void set_id(int);

	string get_username()const;
	int get_level()const;
	int get_id()const;
};
