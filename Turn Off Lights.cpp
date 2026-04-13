#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool canConvert(string &bulbs, int n, int m, int k) {
    vector<int> diff(n + 1, 0);
    int ops = 0;
    int activeFlips = 0;

    for (int i = 0; i < n; i++) {
        activeFlips += diff[i];

        // check actual state after flips
        char currentState;
        if (activeFlips % 2 == 0)
            currentState = bulbs[i];
        else
            currentState = (bulbs[i] == '1') ? '0' : '1';

        // if bulb is ON, we must apply operation
        if (currentState == '1') {
            ops++;
            if (ops > m) return false;

            activeFlips++;

            if (i + k < n)
                diff[i + k] -= 1;
        }
    }

    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    string bulbs;
    cin >> bulbs;

    int low = 1, high = n, ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (canConvert(bulbs, n, m, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}