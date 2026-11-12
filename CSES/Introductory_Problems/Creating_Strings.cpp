#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

#define N 8

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    int n = str.length();

    int fact[9] = { 0, 1, 2, 6, 24, 120, 720, 5040, 40320 };
    int count[26] = {};
    for (const char c : str) count[(int)(c) - 97]++;

    int q = 1;
    for (const int i : count) {
        if (i > 0) q *= fact[i];
    }

    int k = fact[n] / q;
    cout << k << "\n";

    sort(str.begin(), str.end());
    bool global_chosen[N] = {};
    string permutation = "";

    auto search = [&](auto&& self) {
        if (permutation.length() == n) {
            cout << permutation << "\n";
            return;
        }

        bool node_chosen[26] = {};
        for (int i = 0; i < n; i++) {
            int c_idx = (int)(str[i]) - 97;

            if (global_chosen[i] || node_chosen[c_idx]) {
                continue;
            }

            global_chosen[i] = true;
            node_chosen[c_idx] = true;
            permutation.push_back(str[i]);

            self(self);

            global_chosen[i] = false;
            permutation.pop_back();
        }
    };

    search(search);

    return 0;
}