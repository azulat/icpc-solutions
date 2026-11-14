#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; // num tickets, num customers
    cin >> n >> m;

    map<int, int> h; // ticket prices
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        h[k]++;
    }

    vector<int> t(m); // max price for each customer
    for (int i = 0; i < m; i++) cin >> t[i];

    for (const int max_price : t) {
        auto it = h.upper_bound(max_price);

        if (it == h.begin()) {
            cout << "-1\n";
            continue;
        }

        auto ticket = prev(it);
        cout << ticket->first << "\n";

        if (--(ticket->second) == 0) {
            h.erase(ticket);
        }
    }

    return 0;
}