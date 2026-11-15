#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; ull x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ull sum = a[0], subarrays = 0;
    int i = 0, j = 1;

    while (j < n || sum >= x) {
        if (sum < x) {
            sum += a[j++];
        } else {
            if (sum == x) subarrays++;
            sum -= a[i++];
        }
    }

    cout << subarrays;

    return 0;
}