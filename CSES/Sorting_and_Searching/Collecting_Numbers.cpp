#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> x(n + 1);
    for (int xi = 1; xi <= n; xi++) {
        int i; 
        cin >> i;
        x[i] = xi;
    }

    int rounds = 1;
    for (int i = 1; i < n; i++) {
        if (x[i] > x[i + 1]) rounds++;
    }

    cout << rounds;

    return 0;
}