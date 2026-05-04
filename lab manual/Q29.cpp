#include <iostream>
using namespace std;

int main() {
    float temp[30];

    cout << "Enter temperatures: ";
    for (int i = 0; i < 30; i++)
        cin >> temp[i];

    float min = temp[0];
    for (int i = 1; i < 30; i++) {
        if (temp[i] < min)
            min = temp[i];
    }

    cout << "Minimum temperature = " << min;
    return 0;
}