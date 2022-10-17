// simple_for03.cpp
//

#include <iostream>

using namespace std;

int main() {
    
    for (int num = 0; num < 5; num++) {
        if (num == 2) { continue; } // ignores it and continues
        cout << num << endl;
    }
    return 0;
}
