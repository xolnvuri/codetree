#include <iostream>

using namespace std;

int N;

int fac(int N){
    if (N <= 1){
        return 1;
    }
    return N*fac(N -1);
}

int main() {
    cin >> N;

    cout << fac(N);

    return 0;
}