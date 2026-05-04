#include <iostream>
using namespace std;

int main() {
    int arr[5], count = 0;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] % 3 == 0 && arr[i] % 5 == 0)
            count++;
    }

    cout << "Count = " << count;
    return 0;
}