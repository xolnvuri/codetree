#include <iostream>

using namespace std;

int N;

void printupdown(int N){
    if(N == 0){
        return;
    }
    cout << N << " ";
    printupdown(N - 1); // 일단 N부터 1까지 출력하는 함수임. 이제 다시 N까지 출력해야 함.
    cout << N << " "; // 재귀함수가 return을 만나서 재귀 호출이 끝났음. 그리고 다시 이전으로 돌아가는
    //재귀함수의 특성을 이용함. 그렇다면 1부터 N까지 올라갔다가 다시 내려오는 것도 가능하겠지? 한 번 해보기
} // N부터 1까지 감소하며 출력했다 다시 증가하며 N까지 출력하는 거임. 1이 2번 나와야 하는거.
// 그럼 1이 한번만 나오는 재귀함수도 출력이 가능할까? 한 번 해보기

int main() {
    cin >> N;

    printupdown(N);

    return 0;
}