// two_billy_goats.cpp
//

#include <iostream>

using namespace std;

class Goat {
public:
    float weight = 1.0;    // in kilograms
    bool gender;        // male or female
    // basically, male goats are called billy goats
    int health = 10;

    void speak() { cout << "Meeeee\n"; }
    void eat() { weight += 0.5; }
    
    void attack(Goat* ); // it is declared outside the class
    
    int health_get() { return health; }
    void health_decrease() { --health; }
    void health_increase() { ++health; }
};

// the example below:
// how to declare a function outside the class

void Goat::attack(Goat* x) { x->health_decrease(); }
// void attack(Goat *x) { (*x).health_decrease(); } // alternatively

int main() {
    Goat Billy, Rookie;     // Create two Goat objects

    Billy.speak();  // Call Billy's speak() method
    cout << "Billy's health level is: " << Billy.health_get() << "\n\n";

    Rookie.speak();  // Call Rookie's speak() method
    cout << "Rookie's health level is: " << Rookie.health_get() << "\n\n";

    cout << "Oh, no...\nBilly attacks Rookie!\n";

    //Billy.attack(&Rookie);
    Billy.attack(&Rookie);

    cout << "Now Rookie's health level is: " << Rookie.health_get() << endl;

    return 0;
}
