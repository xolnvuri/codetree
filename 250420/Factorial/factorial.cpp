#include <iostream>

using namespace std;

int N;

int fac(int N){
    if (N == 0){
        return 1;
    }
    if (N == 1){
        return 1;
    }
    return fac(N - 1) * N;
}

int main() {
    cin >> N;

    cout << fac(N);

    return 0;
}