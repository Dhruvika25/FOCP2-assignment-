#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "Equilateral";
    else if (a == b || b == c || a == c)
        cout << "Isosceles";
    else
        cout << "Scalene";

    return 0;
}