#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n;
    cin >> x >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    int l = 0, r = x;
    for (int pi : p) {
        if (l < pi && pi < r) {
            if (r - pi > pi - l) {
                l = pi;
            } else {
                r = pi;
            }
        }

        cout << r - l << " ";
    }

    return 0;
}