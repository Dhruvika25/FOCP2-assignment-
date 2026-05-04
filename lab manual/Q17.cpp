#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, sum = 0, temp, rem, digits = 0;

    cout << "Enter number: ";
    cin >> n;

    // Perfect number check
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        cout << "Perfect Number\n";
    else
        cout << "Not Perfect\n";

    // Armstrong check
    temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    sum = 0;

    while (temp > 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";

    return 0;
}