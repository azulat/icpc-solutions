#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

#define MOD 1000000007ull

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<char>> grid(n + 1, vector<char>(n + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];
        }
    }

    vector<vector<ull>> dp(n + 1, vector<ull>(n + 1, 0));
    dp[0][1] = 1;

    for (int c = 1; c <= n; c++) {
        for (int r = 1; r <= n; r++) {
            dp[r][c] = grid[r][c] == '.' ? ((dp[r - 1][c] + dp[r][c - 1]) % MOD) : 0;
        }
    }

    cout << dp[n][n];

    return 0;
}