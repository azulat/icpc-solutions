#include <bits/stdc++.h>

using namespace std;
#define INF 1e9

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];

    vector<int> dp(x + 1, INF);
    dp[0] = 0;

    for (int i = 1; i <= x; i++) {
        for (int c : coins) {
            if (i - c < 0) continue;
            dp[i] = min(dp[i], 1 + dp[i - c]);
        }
    }

    cout << (dp[x] < INF ? dp[x] : -1);

    return 0;
}