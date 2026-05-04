#include <iostream>
using namespace std;

int main() {
    float temp;
    int choice;

    cout << "1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\nEnter choice: ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temp;

    if (choice == 1) {
        cout << "Celsius = " << (temp - 32) * 5 / 9;
    } else if (choice == 2) {
        cout << "Fahrenheit = " << (temp * 9 / 5) + 32;
    } else {
        cout << "Invalid choice";
    }

    return 0;
}