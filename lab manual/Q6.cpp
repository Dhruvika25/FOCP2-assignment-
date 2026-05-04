#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        float basic, bonus, net;
        cout << "Enter basic salary of employee " << i << ": ";
        cin >> basic;

        bonus = 0.12 * basic;
        net = basic + bonus;

        cout << "Bonus = " << bonus << ", Net Salary = " << net << endl;
    }

    return 0;
}