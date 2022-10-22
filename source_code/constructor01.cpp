// constructor01.cpp
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

    int get_x() { return x; }
    int get_y() { return y; }

};

int main() {
    // Create two Coordinates objects
    Coordinates xy1(4, 5);
    Coordinates xy2(3, 12);

    cout << "The first point is x=" << xy1.get_x() 
        << " and y=" << xy1.get_y() << "\n";
    cout << "The second point is x=" << xy2.get_x() 
        << " and y=" << xy2.get_y() << "\n";

    return 0;
}
