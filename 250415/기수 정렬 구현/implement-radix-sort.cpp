#include <iostream>
#include <vector>
using namespace std;

// 자릿수 기준으로 정렬하는 함수
void countingSort(vector<int>& arr, int exp) {
    vector<int> output(arr.size());  // 결과 저장용
    int count[10] = {0};             // 자릿수(0~9) 개수 세기

    // 1. 현재 자릿수 기준으로 count 배열 채우기
    for (int i = 0; i < arr.size(); i++) {
        int digit = (arr[i] / exp) % 10;
        count[digit]++;
    }

    // 2. 누적합으로 바꿔서 위치 정보 계산
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // 3. output에 정렬된 값 저장 (뒤에서부터)
    for (int i = arr.size() - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // 4. output을 원래 배열에 복사
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = output[i];
    }
}

// 전체 기수 정렬
void radixSort(vector<int>& arr) {
    // 최대값 찾기
    int maxVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // 자릿수마다 countingSort 수행
    for (int exp = 1; maxVal / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}

// 메인 함수
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);  // 크기가 n인 벡터 생성
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    radixSort(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}

