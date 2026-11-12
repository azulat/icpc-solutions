#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

ll min_difference(vector<ll>& p, ll i = 0, ll sum1 = 0, ll sum2 = 0) {
    if (i == p.size()) return abs(sum1 - sum2);

    return min(
        min_difference(p, i + 1, sum1 + p[i], sum2),
        min_difference(p, i + 1, sum1, sum2 + p[i])
    );
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> p(n);
    for (ll i = 0; i < n; i++) cin >> p[i];

    cout << min_difference(p);

    return 0;
}