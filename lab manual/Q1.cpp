#include <iostream>
using namespace std;

int main() {
    float a, b, c, avg;
    cout << "Enter marks of 3 students: ";
    cin >> a >> b >> c;

    avg = (a + b + c) / 3;
    cout << "Average = " << avg;

    return 0;
}