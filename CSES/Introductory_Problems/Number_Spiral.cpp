#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> y >> x;

        int n = max(x, y);
        ull out = (ull)(n - 1) * (ull)(n - 1);

        if (n % 2 == 0) {
            out += y;
            if (y == n) out += n - x;
        } else {
            out += x;
            if (x == n) out += n - y;
        }

        cout << out << "\n";
    }

    return 0;
}