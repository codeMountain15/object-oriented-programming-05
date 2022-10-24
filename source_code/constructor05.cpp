// constructor05.cpp (copy constructor example)
//

#include <iostream>
using namespace std;

class Coordinates {

private:
    int x, y;

public:
    // Constructor with parameters
    Coordinates(int a, int b) {
        x = a;
        y = b;
    }
    
    // Copy constructor with parameters
    Coordinates(const Coordinates& c1) {
        x = c1.x;
        y = c1.y;
    }

    int get_x() { return x; }
    int get_y() { return y; }

};

int main() {
    // Create two Coordinates objects
    Coordinates first(4, 5);
    Coordinates copied = first;

    cout << "The first point is x=" << first.get_x()
        << " and y=" << first.get_y() << "\n";
    cout << "The second point is x=" << copied.get_x()
        << " and y=" << copied.get_y() << "\n";

    return 0;
}
