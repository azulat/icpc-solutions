#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool yes = true;
        for (int i = 0; i < k; i++) {
            bool par1 = true;

            for (int j = i; j < n; j += k) {
                if (s[j] == '1') par1 = !par1;
            }

            if (!par1) {
                yes = false;
                break;
            }
        }

        if (yes) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}