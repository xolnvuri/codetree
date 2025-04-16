#include <iostream>

using namespace std;

int N;
int count = 0;

int division(int N){
    if (N == 1){
        return count;
    }
    if (N % 2 == 0){
        count++;
        return division(N/2);
    }
    else{
        count++;
        return division(N/3);
    }
}

int main() {
    cin >> N;

    cout << division(N);

    return 0;
}