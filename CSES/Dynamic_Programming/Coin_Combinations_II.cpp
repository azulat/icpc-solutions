#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

#define MOD 1000000007ull

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> cs(n);
    for (int i = 0; i < n; i++) cin >> cs[i];

    vector<ull> dp(x + 1, 0);
    dp[0] = 1;

    for (int c : cs) {
        for (int i = c; i <= x; i++) {
            dp[i] += dp[i - c];
            if (dp[i] >= MOD) dp[i] -= MOD;
        }
    }

    cout << dp[x];

    return 0;
}