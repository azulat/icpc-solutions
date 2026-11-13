#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(m);
    for (int j = 0; j < m; j++) cin >> b[j];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    int out = 0;
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= k) {
            out++; i++; j++;
        } else if (b[j] > a[i] + k) {
            i++;
        } else {
            j++;
        }
    }

    cout << out;

    return 0;
}