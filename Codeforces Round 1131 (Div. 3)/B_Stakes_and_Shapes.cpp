#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int r, s, p;
        cin >> r >> s >> p;

        if (r - s >= 0) {
            string out(r + s + p, 'P');
            cout << out << "\n";
        } else if (p - r >= 0) {
            string out(r + s + p, 'S');
            cout << out << "\n";
        } else {
            string out(r + s + p, 'R');
            cout << out << "\n";
        }
    }

    return 0;
}