#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    for (int a = 1; a <= n; a++) {
        vector<int> holes(n + 1, 0);
        int cur = a;

        while (holes[cur] == 0) {
            holes[cur]++;
            cur = p[cur];
        }

        cout << cur << " ";
    }

    return 0;
}