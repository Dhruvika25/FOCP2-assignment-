#include <iostream>
#include <algorithm>
using namespace std;

string solve(int n, int a[]) {
    sort(a, a + n, greater<int>());
    int alex = 0, bob = 0;
    int lastA = -1, lastB = -1; 
    int turn = 0; 
    for (int i = 0; i < n; i++) {
        if (turn == 0) {
            if (a[i] != lastA) {
                alex += a[i];
                lastA = a[i];
                turn = 1;
            }
        } else {
            if (a[i] != lastB) {
                bob += a[i];
                lastB = a[i];
                turn = 0;
            }
        }
    }
    if (alex > bob)
        return "Alex";
    else
        return "Bob";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[100000];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << solve(n, a) << endl;
    }

    return 0;
}
