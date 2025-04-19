#include <iostream>

using namespace std;

int N;

void helloworld(int N){
    if (N == 0){
        return;
    }
    helloworld(N - 1);
    cout << "HelloWorld" << endl;
}

int main() {
    cin >> N;

    helloworld(N);

    return 0;
}