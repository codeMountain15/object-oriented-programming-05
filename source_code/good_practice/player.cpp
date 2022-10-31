// good_practice/player.cpp
//

#include <cstring>
#include <iostream>
#include "player.h"

using namespace std;

// set methods
void Player::set_username(string str) {
	username = str;
}

void Player::set_level(int a1) {
	level = a1;
}

void Player::set_id(int a2) {
	id = a2;
}

// get methods
string Player::get_username()const {
	return username;
}

int Player::get_level()const {
	return level;
}

int Player::get_id()const {
	return id;
}
