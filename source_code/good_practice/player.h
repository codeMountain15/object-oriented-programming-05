// good_practice/player.h
//

#pragma once

class Player {
private:
	std::string username;
	int level;
	int id;

public:
	void set_username(std::string); 
	void set_level(int);
	void set_id(int);

	std::string get_username()const;
	int get_level()const;
	int get_id()const;
};
