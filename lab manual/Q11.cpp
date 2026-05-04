#include <iostream>
using namespace std;

int main() {
    int qty;
    float price, total;

    cout << "Enter quantity and price per item: ";
    cin >> qty >> price;

    total = qty * price;

    if (qty > 1000)
        total = total - (0.10 * total);

    cout << "Total expense = " << total;
    return 0;
}