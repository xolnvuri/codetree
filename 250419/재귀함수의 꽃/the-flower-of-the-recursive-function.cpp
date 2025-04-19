#include <iostream>

using namespace std;

int N;

void flower(int N){
    if (N == 0){
        return;
    }
    cout << N << " ";
    flower(N - 1);
    cout << N << " ";
}

int main() {

    cin >> N;

    flower(N);

    return 0;
}