#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    int N;
        cin >> N;
            
                queue<int> q;
                    string command;
                        int value;

                            for (int i = 0; i < N; i++) {
                                    cin >> command;
                                            if (command == "push") {
                                                        cin >> value;
                                                                    q.push(value);
                                                                            } else if (command == "pop") {
                                                                                        if (!q.empty()) q.pop();
                                                                                                } else if (command == "front") {
                                                                                                            if (!q.empty()) cout << q.front() << endl;
                                                                                                                    } else if (command == "size") {
                                                                                                                                cout << q.size() << endl;
                                                                                                                                        } else if (command == "empty") {
                                                                                                                                                    cout << (q.empty() ? 1 : 0) << endl;
                                                                                                                                                            }
                                                                                                                                                                }

                                                                                                                                                                    return 0;
                                                                                                                                                                    }
                                                                                                                                                                    