#include <iostream>

using namespace std;

int n;
int arr[100];

int findMax(int arr[], int n){
    if (n == 1){
        return arr[0];
    }
    int Max = findMax(arr, n - 1);
    return (arr[n - 1] > Max ? arr[n - 1] : Max );
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findMax(arr, n);

    return 0;
}