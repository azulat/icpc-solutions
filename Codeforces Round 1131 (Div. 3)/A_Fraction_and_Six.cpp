#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string target = "six";

        int n, m;
        cin >> n >> m;

        string p, q;
        cin >> p >> q;

        unordered_set<char> letters;
        unordered_map<char, int> plet, qlet;

        for (const auto c : q) {
            qlet[c]++;
            letters.insert(c);
        }

        for (const auto c : p) {
            plet[c]++;
            letters.insert(c);
        }

        bool six_flag = true;
        for (const auto c : letters) {
            if (c == 's' || c == 'i' || c == 'x') {
                continue;
            } else if (plet[c] != qlet[c]) {
                six_flag = false;
            }
        }

        for (const auto c : target) {
            if (plet[c] - qlet[c] != 1) {
                six_flag = false;
            }
        }

        if (six_flag) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}