#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100000];

int partition(int low, int high){
    int i = low - 1;
    int pivot = arr[high];
    for (int j = low; j < high; j++){
        if (arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int low, int high){
    if (low < high){
        int piv = partition(low, high);
        quickSort(low, piv - 1);
        quickSort(piv + 1, high);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(0, n - 1);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
