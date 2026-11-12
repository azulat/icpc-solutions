#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int money = (2 << (n - (k - 1)) - 1) + 2 * (k - 1);
        cout << money << "\n";
    }

    return 0;
}