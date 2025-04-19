#include <iostream>

using namespace std;

int N;

int hap(int N){
    if(N == 1){
        return 1;
    }
    return hap(N - 1) + N;
}

int main() {
    cin >> N;

    cout << hap(N);

    return 0;
}