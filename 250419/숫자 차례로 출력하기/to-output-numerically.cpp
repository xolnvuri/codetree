#include <iostream>

using namespace std;

int N;

void printup(int N){
    if (N == 0){
        return;
    }
    printup(N - 1);
    cout << N << " ";
}

void printdown(int N){
    if (N == 0){
        return;
    }
    cout << N << " ";
    printdown(N - 1);
}

int main() {
    cin >> N;

    printup(N);
    cout << endl;
    printdown(N);

    return 0;
}