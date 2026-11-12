#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

#define MOD (10000000000000000000ull)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull n;
    cin >> n;

    ull trailing_zeros = 0;

    for (ull i = 5; i <= n; i *= 5) {
        trailing_zeros += (n / i);
    }

    cout << trailing_zeros;

    return 0;
}