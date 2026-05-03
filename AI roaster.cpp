#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    // Validate input
    if (name.empty()) {
        cout << "Please enter a valid name." << endl;
        return 0;
    }

    // Roast templates
    vector<string> roasts = {
        "{name} writes code so slow that even a turtle switched to Python.",
        "If procrastination were an Olympic sport, {name} would have gold already.",
        "{name}'s debugging style is staring at the screen until the bug feels guilty.",
        "{name}'s code runs so slowly that even dial-up internet feels fast.",
        "If laziness had a brand ambassador, it would be {name}.",
        "{name} doesn't debug code - they negotiate with bugs.",
        "{name} writes bugs faster than fixes.",
        "Even AI gets confused trying to understand {name}'s code.",
        "{name}'s code has more drama than a daily soap.",
        "{name} opens Stack Overflow before even reading the question."
    };

    // Random selection
    srand(time(0));
    int index = rand() % roasts.size();

    string roast = roasts[index];

    // Replace all occurrences of {name}
    string key = "{name}";
    size_t pos = roast.find(key);

    while (pos != string::npos) {
        roast.replace(pos, key.length(), name);
        pos = roast.find(key, pos + name.length()); // efficient next search
    }

    // Output
    cout << "\n🔥 Roast:\n" << roast << endl;

    return 0;
}