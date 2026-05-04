#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int num, max;
    cout << "Enter numbers: ";
    cin >> max;

    for (int i = 2; i <= n; i++) {
        cin >> num;
        if (num > max)
            max = num;
    }

    cout << "Largest = " << max;
    return 0;
}