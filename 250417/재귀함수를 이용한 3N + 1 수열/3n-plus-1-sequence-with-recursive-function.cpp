#include <iostream>

using namespace std;

int n;

int fuc(int n){
    if (n == 1){
        return 0;
    }
    if (n % 2 == 0){
        return fuc(n/2) + 1;
    }
    else
        return fuc(3*n +1) + 1;
}

int main() {
    cin >> n;

    cout << fuc(n);

    return 0;
}