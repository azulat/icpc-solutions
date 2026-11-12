#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int count[26];
    for (int i = 0; i < 26; i++) count[i] = 0;

    for (const char c : s) {
        count[(int)c - 65]++;
    }

    char odd_c = '\0';
    int odd = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 == 1) {
            odd++;
            odd_c = (char)(i + 65);
        }
    }

    if (odd > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string out = ""; out.reserve(s.length());

    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 == 1) continue;
        out += string(count[i] / 2, (char)(i + 65));
    }

    if (odd_c != '\0') {
        out += string(count[(int)odd_c - 65], odd_c);
    }

    for (int i = 25; i >= 0; i--) {
        if (count[i] % 2 == 1) continue;
        out += string(count[i] / 2, (char)(i + 65));
    }

    cout << out;

    return 0;
}