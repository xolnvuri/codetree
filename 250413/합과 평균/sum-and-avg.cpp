#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int hap;
    double avg;
    hap = A + B;
    avg = (double)hap/2;
    cout << fixed;
    cout.precision(1);
    cout << hap << " " << avg;
    return 0;
}