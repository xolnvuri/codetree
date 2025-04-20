#include <iostream>

using namespace std;

int n;
int arr[100];

int findMax(int arr[], int N){
    if(N == 1){
        return arr[0];
    }
    int max = findMax(arr, N - 1);
    return (arr[N - 1] > max ? arr[N - 1] : max);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findMax(arr, n);

    return 0;
}