#include <iostream>

using namespace std;

int n;

void printstar(int N){
    if (N == 0){
        return;
    }
    printstar(N - 1);
    for (int i = 0; i < N; i++){
        cout << "*";
    }
    cout << endl;
}

int main() {
    cin >> n;

    printstar(n);

    return 0;
}