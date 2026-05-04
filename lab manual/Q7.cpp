#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter scores of 3 players: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << "Player 1 wins";
    else if (b > a && b > c)
        cout << "Player 2 wins";
    else if (c > a && c > b)
        cout << "Player 3 wins";
    else
        cout << "It's a tie";

    return 0;
}