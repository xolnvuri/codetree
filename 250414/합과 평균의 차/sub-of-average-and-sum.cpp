#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int hap = a+b+c;
    double avg;
    avg = hap/3;
    int min;
    min = hap - avg;
    cout << hap << endl << avg << endl << min << endl;
    return 0;
}