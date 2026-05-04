#include <iostream>
using namespace std;

int main() {
    string username;
    cout << "Enter username: ";
    cin >> username;

    bool valid = true;

    for (char ch : username) {
        if (!(isalnum(ch))) {
            valid = false;
            break;
        }
    }

    if (valid)
        cout << "Valid Username";
    else
        cout << "Invalid Username";

    return 0;
}