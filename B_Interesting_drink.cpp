#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int days;
    cin >> days;

    sort(prices.begin(), prices.end());

    for (int i = 0; i < days; i++) {
        int money;
        cin >> money;

        cout << upper_bound(prices.begin(), prices.end(), money) - prices.begin() << "\n";
    }
}