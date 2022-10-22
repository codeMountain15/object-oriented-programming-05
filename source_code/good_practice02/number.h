// good_practice02/number.h
//

#pragma once

class Numbers {
private:
	int number1, number2, number3;

public:
	Numbers(int, int, int);
	~Numbers();
		
	void get_numbers(int &, int &, int &) const;
};
