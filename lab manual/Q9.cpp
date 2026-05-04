#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isdigit(ch))
        cout << "Number";
    else if (isalpha(ch)) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            cout << "Vowel";
        else
            cout << "Consonant";
    } else
        cout << "Special character";

    return 0;
}