//문제의 의도는 전역변수를 사용하지 않고 오직 재귀함수만 사용하여 풀라는 거였던 것 같음
//1이 되기까지 필요한 횟수를 반환하는 함수를 정하기
//만약 N이 1 이라면 함수는 0을 반환해야함.
//n이 짝수라면 1을 더하고 더하고 더하고 더하는 식으로 횟수에 1을 더하고 홀수라면 3으로 나눈 것에
//1을 더하고 더하고 더하는 식으로 하면 됨. 

#include <iostream>

using namespace std;

int N;

int division(int N){
    if (N == 1){
        return 0;
    }
    if (N % 2 == 0){
        return division(N/2) + 1;
    }
    else{
        return division(N/3) + 1;
    }
}

int main() {
    cin >> N;

    cout << division(N);

    return 0;
}