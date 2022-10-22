// example_class01.cpp
//

#include <iostream>
#include <string>

using namespace std;

class Class_example {       // The class
private:
    int int_pr = 10;          // private variable

public:            
    int int_pu = int_pr;        // public variable
    
};

int main() {
    Class_example example;  // Create an object (=example) of Class_example

    
    // Print
    cout << example.int_pu << "\n";    // ok
    // cout << myObj.int_pr << "\n";  // error!

    return 0;
}
