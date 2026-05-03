#include <bits/stdc++.h>
using namespace std;
class MovieTicket {
private:
    unordered_map<int, unordered_set<int>> movieBookings;
    const int MAX_SLOTS = 100;
public:
    bool BOOK(int X, int Y) {
        if (movieBookings[Y].count(X)) {
            return false;
        }
        if (movieBookings[Y].size() >= MAX_SLOTS) {
            return false;
        }
        movieBookings[Y].insert(X);
        return true;
    }
    bool CANCEL(int X, int Y) {
        if (!movieBookings[Y].count(X)) {
            return false;
        }
        movieBookings[Y].erase(X);
        return true;
    }

    bool IS_BOOKED(int X, int Y) {
        return movieBookings[Y].count(X);
    }

    int AVAILABLE_TICKETS(int Y) {
        return MAX_SLOTS - movieBookings[Y].size();
    }
};
int main() {
    int Q;
    cin >> Q;
    cin.ignore();
    MovieTicket system;
    while (Q--) {
        string query;
        getline(cin, query);
        stringstream ss(query);
        string type;
        ss >> type;
        if (type == "BOOK") {
            int X, Y;
            ss >> X >> Y;
            cout << (system.BOOK(X, Y) ? "true" : "false") << endl;
        }
        else if (type == "CANCEL") {
            int X, Y;
            ss >> X >> Y;
            cout << (system.CANCEL(X, Y) ? "true" : "false") << endl;
        }
        else if (type == "IS_BOOKED") {
            int X, Y;
            ss >> X >> Y;
            cout << (system.IS_BOOKED(X, Y) ? "true" : "false") << endl;
        }
        else if (type == "AVAILABLE_TICKETS") {
            int Y;
            ss >> Y;
            cout << system.AVAILABLE_TICKETS(Y) << endl;
        }
    }
    return 0;
}