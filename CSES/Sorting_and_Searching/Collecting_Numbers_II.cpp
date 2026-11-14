#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> x(n + 1);
    for (int i = 1; i <= n; i++) cin >> x[i];

    vector<int> y(n + 1);
    for (int yi = 1; yi <= n; yi++) { 
        y[x[yi]] = yi;
    }

    int rounds = 1;
    for (int i = 1; i < n; i++) {
        if (y[i] > y[i + 1]) rounds++;
    }

    while (m--) {
        int a, b;
        cin >> a >> b;

        set<pair<int, int>> pairs;
        for (const int v : { x[a], x[b] }) {
            if (v > 1) pairs.emplace(v - 1, v);
            if (v < n) pairs.emplace(v, v + 1);
        }

        for (auto [u, v] : pairs) {
            if (y[u] > y[v]) rounds--;
        }

        swap(y[x[a]], y[x[b]]);
        swap(x[a], x[b]);

        for (auto [u, v] : pairs) {
            if (y[u] > y[v]) rounds++;
        }

        cout << rounds << "\n";
    }

    return 0;
}