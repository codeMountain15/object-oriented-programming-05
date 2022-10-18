// array_for04.cpp
//

#include <iostream>
using namespace std;

int main()
{
    char area[] = { 'P', 'L', 'A', 'T', 'A', 'N', 'E', 'S'};

    cout << "Loop version 1\n";
    for (char c : area)
        cout << c << " ";

    cout << "\n\n";

    // data type of x is set as int
    cout << "Loop version 2\n";
    for (auto c : area)
        cout << c << " ";

    cout << "\n";

    return 0;
}
