#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string str;
        cin >> str;
            stack<char> s;
                bool isValid = true;

                    for (char c : str) {
                            if (c == '(') {
                                        s.push(c);
                                                } else if (c == ')') {
                                                            if (s.empty()) {
                                                                            isValid = false;
                                                                                            break;
                                                                                                        } else {
                                                                                                                        s.pop();
                                                                                                                                    }
                                                                                                                                            }
                                                                                                                                                }

                                                                                                                                                    if (!s.empty()) {
                                                                                                                                                            isValid = false;
                                                                                                                                                                }

                                                                                                                                                                    if (isValid) {
                                                                                                                                                                            cout << "Yes" << endl;
                                                                                                                                                                                } else {
                                                                                                                                                                                        cout << "No" << endl;
                                                                                                                                                                                            }

                                                                                                                                                                                                return 0;
                                                                                                                                                                                                }
                                                                                                                                                                                                