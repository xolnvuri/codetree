#include <iostream>

using namespace std;

int N;

void helloworld(int N){
    if (N == 0){
        return;
    }
    cout << "HelloWorld" << endl;
    helloworld(N - 1);
}

int main() {
    cin >> N;

    helloworld(N);

    return 0;
}