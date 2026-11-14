#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    map<int, int> m;
    for (int i = 1; i <= n; i++) {
        int v;
        cin >> v;

        auto it = m.find(x - v);
        if (it != m.end()) {
            cout << it->second << " " << i;
            return 0;
        }

        m[v] = i;
    }

    cout << "IMPOSSIBLE";

    return 0;
}