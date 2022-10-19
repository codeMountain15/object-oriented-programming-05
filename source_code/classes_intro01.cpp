// classes_intro01.cpp
//

#include <iostream>

using namespace std;

class Sheep {        
public:

    string color;       // white, black etc.
    float weight = 1.0;    // in kilograms
    bool gender;        // male or female

    void speak() { cout << "Mpeeeee\n"; }
    void eat() { weight += 0.5; }

};

int main() {
    Sheep Kitsos;     // Create a Sheep object
    Kitsos.speak();  // Call the speak() method

    Kitsos.eat();   // Call the eat() method

    cout << "\nThis sheep weights " << Kitsos.weight << " kilograms\n";

    return 0;
}
