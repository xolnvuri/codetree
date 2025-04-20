#include <iostream>
using namespace std;

int n;
int arr[10];

// 최대공약수
int gcd2(int a, int b) {
    if (b == 0) return a;
    return gcd2(b, a % b);
}

// 배열을 이용한 최대공약수
int gcd(int arr[], int n){
    if(n == 1){
        return arr[0];  // 여기서도 return n;이 아니라 arr[0]!
    }
    int prev = gcd(arr, n - 1);
    return gcd2(prev, arr[n - 1]); 
}

// 최소공배수
int lcm(int arr[], int n) {
    if (n == 1)
        return arr[0];

    int prevLCM = lcm(arr, n - 1); 
    int now = arr[n - 1];         
    return (prevLCM * now) / gcd2(prevLCM, now);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << lcm(arr, n);

    return 0;
}
