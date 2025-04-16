#include <iostream>
using namespace std;

// 최대 힙 구성
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    // 최대 힙 만들기
    for (int i = n/2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // 하나씩 꺼내면서 정렬
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]); // 가장 큰 걸 맨 뒤로
        heapify(arr, i, 0);    // 남은 부분 힙 정렬
    }
}

int main() {
    int n;
    cin >> n;

    int arr[1000]; // 입력이 1000개 이하일 경우
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    heapSort(arr, n);

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
