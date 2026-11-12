#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> h(n);
        for (int i = 0; i < n; i++) cin >> h[i];

        int k = *max_element(h.begin(), h.end()) - *min_element(h.begin(), h.end()) + 1;

        cout << k << "\n";
    }

    return 0;
}