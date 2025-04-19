#include <iostream>

using namespace std;

int n;

void printstar(int n){
    if (n == 0){
        return;
    }
    for (int i =  0; i < n; i++){
        cout << "*" << " ";
    }
    cout << endl;
    printstar(n - 1);
    for (int i =  0; i < n; i++){
        cout << "*" << " ";
    }
    cout << endl;
}

int main() {
    cin >> n;

    printstar(n);

    return 0;
}