#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 1; i <= n - 1; i++) {
        cin >> a[i];
    }

    int i = 1;
    while (i < t) {
        i += a[i];

        if (i == t) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}