#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    ull a = (ull)*max_element(v.begin(), v.end());
    ull b = (ull)*min_element(v.begin(), v.end());

    ull money = (a - b) * (a - b);
    cout << money;

    return 0;
}