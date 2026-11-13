#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

#define N 200000

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    unordered_set<int> values;
    values.reserve(N);

    while (n--) {
        int v;
        cin >> v;

        values.insert(v);
    }

    cout << values.size();

    return 0;
}