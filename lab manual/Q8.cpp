#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << i << " BuzzFuzz\n";
        else if (i % 3 == 0)
            cout << i << " Buzz\n";
        else if (i % 5 == 0)
            cout << i << " Fuzz\n";
        else
            cout << i << endl;
    }

    return 0;
}