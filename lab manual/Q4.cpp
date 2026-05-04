#include <iostream>
using namespace std;

int main() {
    int itemNo, quantity;
    float price, amount, discount, finalAmount;

    cout << "Enter item no, quantity, unit price: ";
    cin >> itemNo >> quantity >> price;

    amount = quantity * price;
    discount = 0.2 * amount;
    finalAmount = amount - discount;

    cout << "Total Amount = " << amount << endl;
    cout << "Discount = " << discount << endl;
    cout << "Final Amount = " << finalAmount;

    return 0;
}