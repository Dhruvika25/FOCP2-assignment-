#include <iostream>
using namespace std;

int main() {
    float salary[10], total = 0;

    cout << "Enter salaries: ";
    for (int i = 0; i < 10; i++) {
        cin >> salary[i];
        total += salary[i];
    }

    float avg = total / 10;

    cout << "Total salary = " << total << endl;
    cout << "Average salary = " << avg;

    return 0;
}