#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    // remove extra spaces
    stringstream ss(str);
    string word, clean = "";
    while (ss >> word) {
        if (!clean.empty()) clean += " ";
        clean += word;
    }

    // sentence case
    for (int i = 0; i < clean.length(); i++) {
        if (i == 0)
            clean[i] = toupper(clean[i]);
        else
            clean[i] = tolower(clean[i]);
    }

    int words = 0, digits = 0, special = 0;
    stringstream ss2(clean);
    while (ss2 >> word) words++;

    for (char ch : clean) {
        if (isdigit(ch)) digits++;
        else if (!isalnum(ch) && ch != ' ') special++;
    }

    bool valid = true;
    for (char ch : clean) {
        if (!(isalnum(ch) || ch == ' ')) {
            valid = false;
            break;
        }
    }

    cout << "Processed string: " << clean << endl;
    cout << "Words: " << words << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special chars: " << special << endl;

    if (valid)
        cout << "Valid string";
    else
        cout << "Invalid string";

    return 0;
}