#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull n;
    cin >> n;

    ull sum_n = (n * (n + 1) / 2);

    if (sum_n % 2 == 1) {
        cout << "NO";
        return 0;
    }

    cout << "YES" << "\n";

    ull target_sum = sum_n / 2;

    vector<ull> a; a.reserve(n);
    vector<ull> b; b.reserve(n);

    ull ac = 0;
    ull i = n;
    while (ac + i < target_sum) {
        a.push_back(i);
        ac += i--;
    }
    ull diff = target_sum - ac;
    if (diff > 0) a.push_back(diff);

    while (i > 0) {
        if (i != diff) b.push_back(i);
        i--;
    } 

    cout << a.size() << "\n";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    cout << b.size() << "\n";
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }

    return 0;
}