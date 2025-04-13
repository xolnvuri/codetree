#include <iostream>
using namespace std;

int main() {
    int water;
    cin >> water;
    if (water < 0)
        cout << "ice";
    else if (water >= 0 and water < 100)
        cout << "water";
    else
        cout << "vapor";
    return 0;
}