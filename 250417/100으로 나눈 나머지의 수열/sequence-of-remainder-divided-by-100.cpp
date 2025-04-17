#include <iostream>

using namespace std;

int N;

int function(int N){
    if (N == 1){
        return 2;
    }
    if (N == 2){
        return 4;
    }
    return function(N - 1)*function(N - 2) % 100;
}

int main() {
    cin >> N;

    cout << function(N);

    return 0;
}