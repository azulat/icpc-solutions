#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<ull> ps(n + 1);
    ps[0] = 0;
    
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        ps[i] = ps[i - 1] + (ull)x;
    }

    while (q--) {
        int a, b;
        cin >> a >> b;

        cout << ps[b] - ps[a - 1] << "\n";
    }

    return 0;
}