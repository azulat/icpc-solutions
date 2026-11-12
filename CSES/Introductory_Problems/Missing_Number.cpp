#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> a[i];

    ull sum = accumulate(a.begin(), a.end(), 0ull);
    ull target_sum = (ull)n * ((ull)n + 1) / 2;

    ull missing = target_sum - sum;

    cout << missing;

    return 0;
}