// simple_for02.cpp
//

#include <iostream>

using namespace std;

int main() {
    
    for (int num = 0; num < 5; num++) {
        if (num == 2) { break; }  // exits the loop
        cout << num << endl;
    }
    return 0;
}
