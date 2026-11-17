#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> dp(n + 1, n + 1);
    dp[0] = 0;
    for (int i = 1; i <= min(9, n); i++) dp[i] = 1;

    for (int x = 10; x <= n; x++) {
        int x_aux = x;
        while (x_aux > 0) {
            dp[x] = min(dp[x], 1 + dp[x - x_aux % 10]);
            x_aux /= 10;
        }
    }

    cout << dp[n];

    return 0;
}