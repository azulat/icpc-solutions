#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    nth_element(p.begin(), p.begin() + (n / 2), p.end());
    int med = p[n / 2];

    ull min_cost = 0;
    for (int i = 0; i < n; i++) {
        min_cost += (ull)abs(med - p[i]);
    }

    cout << min_cost;

    return 0;
}