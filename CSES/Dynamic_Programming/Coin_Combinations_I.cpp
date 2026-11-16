#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

#define MOD 1000000007ull

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];

    vector<ull> dp(x + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= x; i++) {
        for (int c : coins) {
            if (i - c < 0) continue;
            dp[i] += dp[i - c];
            dp[i] %= MOD;
        }
    }

    cout << dp[x];

    return 0;
}