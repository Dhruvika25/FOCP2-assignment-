#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());

    unordered_set<int> used;

    long long alex = 0, bob = 0;
    bool turn = true; 

    for (int i = 0; i < n; i++) {
        if (used.count(a[i])) continue;

        used.insert(a[i]);

        if (turn) alex += a[i];
        else bob += a[i];

        turn = !turn;
    }

    if (alex > bob) cout << "Alex\n";
    else cout << "Bob\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}