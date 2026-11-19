#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    unordered_map<char, int> chars(s.length());
    for (int i = 0; i < s.length(); i++) {
        chars[s[i]]++;
    }

    int garlands = min({ chars['T'], chars['P'], chars['A'] + chars['U'] });
    cout << garlands;

    return 0;
}