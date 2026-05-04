#include <iostream>
using namespace std;

int main() {
    int arr[5], evenSum = 0, oddSum = 0;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    cout << "Even sum = " << evenSum << endl;
    cout << "Odd sum = " << oddSum;

    return 0;
}