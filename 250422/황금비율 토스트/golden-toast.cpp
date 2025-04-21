#include <iostream>
#include <string>
#include <list>

using namespace std;

int n, m;
string s;

int main() {
    cin >> n >> m;
    cin >> s;

    list<char> l(s.begin(), s.end());         // 문자열을 리스트로 변환
    list<char>::iterator it = l.end();        // 커서를 맨 뒤로 초기화

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;

        if (command == 'P') {
            char c;
            cin >> c;
            l.insert(it, c);
        }
        else if (command == 'L') {
            if (it != l.begin()) it--;
        }
        else if (command == 'R') {
            if (it != l.end()) it++;
        }
        else if (command == 'D') {
            if (it != l.end()) it = l.erase(it);
        }
    }

    for (char ch : l) {
        cout << ch;
    }

    return 0;
}
