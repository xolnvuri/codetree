#include <iostream>
using namespace std;

int arr[100];      // 입력 받을 배열
int output[100];   // 정렬 결과를 저장할 배열
int countArr[10];  // 각 자릿수 숫자의 개수를 셀 배열

// Counting Sort 함수: exp는 현재 자릿수 (1, 10, 100...)
void countingSort(int n, int exp) {
    // countArr를 0으로 초기화
    for (int i = 0; i < 10; i++) {
        countArr[i] = 0;
    }

    // 현재 자릿수에 해당하는 숫자의 개수 세기
    for (int i = 0; i < n; i++) {
        int digit = (arr[i] / exp) % 10;
        countArr[digit]++;
    }

    // countArr를 누적합으로 바꿈 (정렬 위치 계산용)
    for (int i = 1; i < 10; i++) {
        countArr[i] += countArr[i - 1];
    }

    // 정렬된 결과를 output 배열에 저장 (뒤에서부터)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[countArr[digit] - 1] = arr[i];
        countArr[digit]--;
    }

    // output을 arr에 복사
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// 전체 기수 정렬 함수
void radixSort(int n) {
    // 최대값 찾기
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // 자릿수 별로 counting sort 수행
    for (int exp = 1; maxVal / exp > 0; exp *= 10) {
        countingSort(n, exp);
    }
}

// 메인 함수
int main() {
    int n;
    cin >> n;  // 첫 줄 입력

    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // 두 번째 줄 입력
    }

    radixSort(n);  // 정렬 실행

    // 정렬 결과 출력 (공백으로 구분)
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) cout << " ";  // 마지막 숫자 뒤에는 띄어쓰기 안 함
    }
    cout << endl;

    return 0;
}
