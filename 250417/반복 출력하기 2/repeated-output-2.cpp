#include <iostream>

using namespace std;

int N;
void print(int N){
    if(N == 0){
        return;
    }
    print(N - 1);
    cout << "HelloWorld" << endl;
}

int main() {
    cin >> N;

    print(N);

    return 0;
}