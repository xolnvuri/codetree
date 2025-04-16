#include <iostream>

using namespace std;

int N;

void printdown(int N){
    if (N == 0){
        return;
    }
    cout << N << " ";
    printdown(N - 1);
}

void printup(int N){
    if (N == 0){
        return;
    }
    printup(N - 1); // if문이 나온 후 바로 재귀호출 -> N이 0이 될 때까지 cout 출력 안하고 계속 재귀호출.
    // 그리고 return을 만났을 때 다시 돌아가는데 제일 처음으로 돌아가는 게 아니라 바로 직전으로 돌아감
    // -> N = 1일때가 출력되는 것임. 그 다음은 N = 2일때 출력되는 그런 방식. 이게 재귀함수다. 맞나?
    cout << N << " "; 
}

int main() {
    cin >> N;

    printup(N);
    cout << endl;
    printdown(N);

    return 0;
}