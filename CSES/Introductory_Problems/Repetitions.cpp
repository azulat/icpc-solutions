#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int max_len = 0;
    int cur_len = 0;
    char cur = '*';

    for (const char c : s) {
        if (c == cur) {
            max_len = max(max_len, ++cur_len);
        } else {
            cur_len = 1;
            cur = c;
        }
    }

    max_len = max(max_len, cur_len);

    cout << max_len;

    return 0;
}