// destructor01.cpp
//

#include<iostream>
using namespace std;

class Instant
{
public:
    Instant()
    { cout << "Hello!\n"; }

    ~Instant(){ cout << "Goodbye!\n"; }
};

int main()
{
    Instant x;

    return 0;
}
