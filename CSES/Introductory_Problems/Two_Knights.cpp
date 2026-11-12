#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int k = 1; k <= n; k++) {
        ull k_sq = k*k;
        ull pos = ((k_sq - 1)*k_sq) / 2;

        ull rects = 2 * (max(0, k - 1) * max(0, k - 2));
        ull ctrl_pos = 2 * rects;

        cout << pos - ctrl_pos << "\n";
    }

    return 0;
}