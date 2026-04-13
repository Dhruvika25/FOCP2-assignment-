#include <iostream>
using namespace std;

// count distinct prime factors
int countPrimeFactors(int n) {
    int cnt = 0;

    // check factor 2
    if (n % 2 == 0) {
        cnt++;
        while (n % 2 == 0)
            n /= 2;
    }

    // check odd factors
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            cnt++;
            while (n % i == 0)
                n /= i;
        }
    }

    // if remaining number is prime
    if (n > 1)
        cnt++;

    return cnt;
}

// compute 2^k
long long powerOf2(int k) {
    long long ans = 1;
    for (int i = 0; i < k; i++)
        ans *= 2;
    return ans;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int k = countPrimeFactors(n);

        cout << powerOf2(k) << endl;
    }

    return 0;
}