#include <iostream>

using namespace std;

int N;

int gkatn(int N){
    if (N == 1){
        return 1;
    }
    if (N == 2){
        return 2;
    }
    if (N % 2 == 0){
        return N + gkatn(N - 2);
    }
    else{
        return N + gkatn(N - 2);
    }
}

int main() {
    cin >> N;

    cout << gkatn(N);

    return 0;
}