#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

#define MOD 1000000007ull

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<ull> sums(n + 1);
    sums[0] = 1;

    for (int i = 1; i <= n; i++) {
        ull ways = 0;
        for (int j = 1; j <= 6; j++) {
            if (i - j >= 0) {
                ways += sums[i - j] % MOD;
                ways %= MOD;
            }
        }

        sums[i] = ways;
    }

    cout << sums[n];

    return 0;
}