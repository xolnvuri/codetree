#include <iostream>

using namespace std;

int N;

int function(int N){
    if (N == 1){
        return 1;
    }
    if (N == 2){
        return 2;
    }
    return function(N / 3) + function(N - 1);
}

int main() {
    cin >> N;

    cout << function(N);

    return 0;
}