#include <iostream>
#include <string>
#include <list>

using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    cin >> N;

    list<int> arr;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
        }

        if(command[i] == "push_front"){
            arr.push_front(A[i]);
        }
        else if(command[i] == "push_back"){
            arr.push_back(A[i]);
        }
        else if(command[i] == "pop_front"){
            int a = arr.front();
            arr.pop_front();
            cout << a << endl;
        }
        else if(command[i] == "pop_back"){
            int b = arr.back();
            arr.pop_back();
            cout << b << endl;
        }
        else if(command[i] == "size"){
            cout << arr.size() << endl;
        }
        else if(command[i] == "empty"){
            cout << arr.empty() << endl;
        }
        else if(command[i] == "front"){
            cout << arr.front() << endl;
        }
        else if(command[i] == "back"){
            cout << arr.back() << endl;
        }
    }

    return 0;
}
