#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<ll> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    ll max_sum = x[0];
    ll cur_sum = x[0];

    for (int i = 1; i < n; i++) {
        cur_sum = max(x[i], cur_sum + x[i]);
        max_sum = max(max_sum, cur_sum);
    }

    cout << max_sum;

    return 0;
}