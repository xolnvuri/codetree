#include <iostream>

using namespace std;

int n;
int arr[100000];
int temp[100000]; // 정렬할 때 임시로 사용할 배열

// 병합 함수: arr[left ~ mid], arr[mid+1 ~ right]를 병합
void merge(int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;

    // 두 배열을 비교하면서 작은 값을 temp에 저장
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // 남은 값들 복사
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // temp 배열의 정렬된 값을 원래 배열로 복사
    for (int l = left; l <= right; l++) {
        arr[l] = temp[l];
    }
}

// 병합 정렬 함수
void mergeSort(int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(left, mid);         // 왼쪽 절반 정렬
        mergeSort(mid + 1, right);    // 오른쪽 절반 정렬
        merge(left, mid, right);      // 병합
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

