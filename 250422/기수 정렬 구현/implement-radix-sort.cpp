#include <iostream>
#include <vector>

#define Max_digit 10
#define Max_pos 6
#define Max_N 100000

using namespace std;

int n;
int arr[Max_N];

void radixsort(int arr[], int n){
    int p = 1;
    for (int i = 0; i < Max_pos; i++){
        vector<int> new_arr[Max_digit];
        for(int j = 0; j < n; j++){
            int digit = (arr[j] / p) % 10;
            new_arr[digit].push_back(arr[j]);
        }
        int index = 0;
        for(int i = 0; i < Max_digit; i++){
            for(int j = 0; j < new_arr[i].size(); j++){
                arr[index++] = new_arr[i][j];
            }
        }
        p *= 10;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    radixsort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
