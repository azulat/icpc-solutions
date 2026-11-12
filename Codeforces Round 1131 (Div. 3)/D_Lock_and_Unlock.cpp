#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll cost(vector<ll>& a, ll mi, ll ma, ll target) {
    ll cost = 0;
    for (const auto ai : a) {
        ll bi = mi + ma - ai;
        cost += abs(bi - target);
    }

    return cost;
}

ll get_median(vector<ll>& a) {
    auto m = a.begin() + a.size() / 2;
    nth_element(a.begin(), m, a.end());
    return *m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        ll mi = *min_element(a.begin(), a.end());
        ll ma = *max_element(a.begin(), a.end());
        ll target = mi + ma - get_median(a);

        ll cost = 0;
        for (const auto ai : a) {
            ll bi = mi + ma - ai;
            cost += abs(bi - target);
        }

        cout << cost << " " << (ma - mi) << "\n";
    }

    return 0;
}