#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

#define MOD 1000000007ull

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    ull out = 1;
    for (int i = 0; i < n; i++) {
        out = (out * 2) % MOD;
    }

    cout << out;

    return 0;
}