#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    sort(h.begin(), h.end());

    vector<pair<int, int>> prices;
    prices.reserve(n);
    for (const auto x : h) {
        if (prices.empty() || prices.back().first != x) {
            prices.emplace_back(x, 1);
        } else {
            prices.back().second++;
        }
    }

    vector<int> t(m);
    for (int i = 0; i < m; i++) cin >> t[i];

    for (const int max_price : t) {
        int idx = upper_bound(prices.begin(), prices.end(), make_pair(max_price, 0)) - prices.begin() - 1;
        cout << idx << " ";
        if (idx >= 0 && prices[idx].second > 0) {
            prices[idx].second--;
            cout << prices[idx].first << "\n";
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}