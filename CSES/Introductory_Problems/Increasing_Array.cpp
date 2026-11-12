#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    ull moves = 0;

    for (int i = 1; i < n; i++) {
        if (x[i - 1] > x[i]) {
            moves += (x[i - 1] - x[i]);
            x[i] = x[i - 1];
        }
    }

    cout << moves;

    return 0;
}