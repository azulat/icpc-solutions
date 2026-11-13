#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    sort(p.begin(), p.end());

    int pairs = 0;

    int i = 0, j = n - 1;
    while (i < j) {
        if (p[i] + p[j] <= x) {
            pairs++; i++;
        }

        j--;
    }

    cout << n - pairs;

    return 0;
}