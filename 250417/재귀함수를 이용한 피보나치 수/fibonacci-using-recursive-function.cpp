#include <iostream>

using namespace std;

int N;

int fibonacci(int N){
    if (N == 1){
        return 1;
    }
    if (N == 2){
        return 1;
    }
    return fibonacci(N - 2) + fibonacci(N - 1);
}

int main() {
    cin >> N;

    cout << fibonacci(N);

    return 0;
}