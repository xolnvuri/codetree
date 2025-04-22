#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            int min = i;
            if(arr[j] < arr[min]){
                int temp = arr[min];
                arr[min] = arr[j];
                arr[j] = temp;
             }
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
// 선택 정렬은 가장 작은 수를 찾아야함. 그러므로 for문으로 가장 작은 수를 찾는 게 먼저.
// 근데 가장 작은 수를 가르키는 인덱스 번호를 저장하는 게 더 편할까?
// 가장 작은 수를 저장하는 방법으로 해볼 수도 있지 않나요