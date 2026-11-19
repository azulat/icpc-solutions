#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> r(n);
    for (int i = 0; i < n; i++) cin >> r[i];

    int streak = 0, points = 0;
    for (const int i : r) {
        if (i == 0) {
            streak = 0;
            points--;
        } else {
            points++;
            if (++streak >= 3) points++;
        }
    }

    cout << points;

    return 0;
}