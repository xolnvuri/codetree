#include <iostream>
#include <stack>
#include <string>

using namespace std;

int N;
string command[10000];
int value[10000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
        }
    }

    stack<int> s;

    for(int i = 0; i < N; i++){
        if (command[i] == "push"){
            s.push(value[i]);
        }
        else if (command[i] == "pop"){
            int x = s.top();
            cout << x << endl;
            s.pop();
        }
        else if (command[i] == "size"){
            cout << s.size() << endl;
        }
        else if (command[i] == "empty"){
            if(s.empty()){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
        else{
            cout << s.top() << endl;
        }
    }

    return 0;
}
