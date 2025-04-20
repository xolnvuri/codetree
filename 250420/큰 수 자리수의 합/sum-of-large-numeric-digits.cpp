#include <iostream>

using namespace std;

int a, b, c;

int func(int N){
    if (N < 10){
        return N;
    }
    return func(N / 10) + N % 10;
}

int main() {
    cin >> a >> b >> c;

    cout << func(a*b*c);

    return 0;
}