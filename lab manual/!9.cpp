#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter range: ";
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i <= 1) continue;

        bool prime = true;
        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime)
            cout << i << " ";
    }

    return 0;
}