#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    int max1 = arr[0], max2 = arr[1];

    if (max2 > max1) swap(max1, max2);

    for (int i = 2; i < 5; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    cout << "Largest = " << max1 << endl;
    cout << "Second Largest = " << max2;

    return 0;
}