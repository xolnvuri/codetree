#include <iostream>

using namespace std;
// 각 자리 숫자의 제곱의 합.
int N;

int square(int N){
    if (N < 10){
        return N*N;
    }
    return square(N/10) + (N%10)*(N%10);
}

int main() {
    cin >> N;

    cout << square(N);

    return 0;
}