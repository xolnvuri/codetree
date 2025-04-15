#include <iostream>

using namespace std;

int n;
bool Fin;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do{
        Fin = true;
        for(int i = 0; i < n - 1; i++){
            if (arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                Fin = false;
            }
        }

    }while(!Fin);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
