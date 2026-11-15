#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> k(n);
    for (int i = 0; i < n; i++) cin >> k[i];

    multiset<int> towers;
    for (const int ki : k) {
        auto it = towers.upper_bound(ki);
        if (it != towers.end()) {
            towers.erase(it);
        }

        towers.insert(ki);
    }

    cout << towers.size();

    return 0;
}