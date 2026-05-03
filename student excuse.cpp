#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    // Check empty input
    if (name.empty()) {
        cout << "Please enter a valid name." << endl;
        return 0;
    }

    // Excuse templates
    vector<string> excuses = {
        "{name} couldn’t finish the assignment because the laptop installed updates for 6 hours.",
        "{name} was about to complete the homework when the Wi-Fi mysteriously disappeared.",
        "{name} tried finishing the assignment, but the keyboard suddenly stopped working.",
        "{name}'s file got deleted right before submission. Totally not suspicious.",
        "{name} was halfway done when the system decided to restart without warning.",
        "{name} completed everything, but the file refused to save.",
        "{name}'s brain was ready, but the internet was not.",
        "{name} opened the assignment, but the motivation failed to load.",
        "{name} almost submitted the work, but the laptop battery gave up at the last moment.",
        "{name} spent hours on the assignment, but accidentally closed it without saving."
    };

    // Random selection
    srand(time(0));
    int index = rand() % excuses.size();

    string excuse = excuses[index];

    // Replace {name}
    string key = "{name}";
    size_t pos = excuse.find(key);

    while (pos != string::npos) {
        excuse.replace(pos, key.length(), name);
        pos = excuse.find(key, pos + name.length());
    }

    // Output
    cout << "\n📌 Excuse:\n" << excuse << endl;

    return 0;
}