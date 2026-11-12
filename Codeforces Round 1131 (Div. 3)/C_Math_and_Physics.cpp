#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool all1 = true;
        bool all1_intern = true;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != 1) {
                all1 = false;
                if (i > 0 && i < n - 1) all1_intern = false;
            }
        }

        if (all1) {
            cout << -1 << "\n";
        } else if (all1_intern) {
            int final_mass = a[0] + a[a.size() - 1] - 1;
            cout << final_mass << "\n";
        } else {
            int final_mass = accumulate(a.begin(), a.end(), 0) - 1;
            cout << final_mass << "\n";
        }
    }

    return 0;
}