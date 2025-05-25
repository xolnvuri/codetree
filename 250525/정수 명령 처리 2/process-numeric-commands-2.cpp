#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    cin >> N;

        for (int i = 0; i < N; i++) {
                cin >> command[i];
                        if (command[i] == "push") {
                                    cin >> A[i];
                                            }
                                                }

                                                    queue<int> q;

                                                        for (int i = 0; i < N; i++) {
                                                                if (command[i] == "push") {
                                                                            q.push(A[i]);
                                                                                    } else if (command[i] == "pop") {
                                                                                                if (!q.empty()) {
                                                                                                                cout << q.front() << endl;
                                                                                                                                q.pop();
                                                                                                                                            } else {
                                                                                                                                                            cout << 0 << endl;  // 비어있으면 0 출력
                                                                                                                                                                        }
                                                                                                                                                                                } else if (command[i] == "front") {
                                                                                                                                                                                            if (!q.empty()) {
                                                                                                                                                                                                            cout << q.front() << endl;
                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                                        cout << 0 << endl;  // 비어있으면 0 출력
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                            } else if (command[i] == "size") {
                                                                                                                                                                                                                                                                        cout << q.size() << endl;
                                                                                                                                                                                                                                                                                } else if (command[i] == "empty") {
                                                                                                                                                                                                                                                                                            cout << (q.empty() ? 1 : 0) << endl;
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                            