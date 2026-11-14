#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<ull> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    sort (x.begin(), x.end());

    ull rng = 0;
    for (const ull xi : x) {
        if (xi > rng + 1) break;
        rng += xi;
    }

    cout << rng + 1;

    return 0;
}