#include <iostream>

using namespace std;

int a, b, c;

int multiplus(int a){
    if(a < 10){
        return a;
    }
    return a % 10 + multiplus(a / 10);
}

int main() {
    cin >> a >> b >> c;

    cout << multiplus(a*b*c);

    return 0;
}