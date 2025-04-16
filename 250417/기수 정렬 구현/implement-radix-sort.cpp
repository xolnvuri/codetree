#include <iostream>
#include <vector>
using namespace std;

void countingSort(vector<int>& arr, int exp) {
    vector<int> output(arr.size());
    int count[10] = {0};            

    for (int i = 0; i < arr.size(); i++) {
        int digit = (arr[i] / exp) % 10;
        count[digit]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = arr.size() - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    for (int i = 0; i < arr.size(); i++) {
        arr[i] = output[i];
    }
}


void radixSort(vector<int>& arr) {

    int maxVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    for (int exp = 1; maxVal / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}


int main() {
    int n;
    cin >> n;

    vector<int> arr(n);  
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


