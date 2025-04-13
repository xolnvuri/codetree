#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N < 0){
        cout << N << endl << "minus" << endl;
    }
    else{
        cout << N << endl;
    }
    return 0;
}