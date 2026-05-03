#include <bits/stdc++.h>
using namespace std;

class Bank {
private:
    unordered_map<int, long long> acc;
public:
    bool CREATE(int X, long long Y) {
        if (acc.find(X) == acc.end()) {
            acc[X] = Y;
            return true;   // new account created
        } else {
            acc[X] += Y;
            return false;  
        }
    }
    bool DEBIT(int X, long long Y) {
        if (acc.find(X) == acc.end() || acc[X] < Y) {
            return false;
        }
        acc[X] -= Y;
        return true;
    }
    bool CREDIT(int X, long long Y) {
        if (acc.find(X) == acc.end()) {
            return false;
        }
        acc[X] += Y;
        return true;
    }
    long long BALANCE(int X) {
        if (acc.find(X) == acc.end()) {
            return -1;
        }
        return acc[X];
    }
};
int main() {
    int Q;
    cin >> Q;
    cin.ignore();
    Bank bank;
    while (Q--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        string type;
        ss >> type;
        if (type == "CREATE") {
            int X;
            long long Y;
            ss >> X >> Y;
            cout << (bank.CREATE(X, Y) ? "true" : "false") << endl;
        }
        else if (type == "DEBIT") {
            int X;
            long long Y;
            ss >> X >> Y;
            cout << (bank.DEBIT(X, Y) ? "true" : "false") << endl;
        }
        else if (type == "CREDIT") {
            int X;
            long long Y;
            ss >> X >> Y;
            cout << (bank.CREDIT(X, Y) ? "true" : "false") << endl;
        }
        else if (type == "BALANCE") {
            int X;
            ss >> X;
            cout << bank.BALANCE(X) << endl;
        }
    }
    return 0;
}