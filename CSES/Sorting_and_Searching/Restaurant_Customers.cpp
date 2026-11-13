#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int max_customers = 0;

    int n;
    cin >> n;

    vector<pair<int, char>> times;
    times.reserve(2 * n);
    for (int i = 0; i < n; i++) {
        int a, l;
        cin >> a >> l;

        times.emplace_back(a, 'A');
        times.emplace_back(l, 'L');
    }

    sort(times.begin(), times.end());

    int current_customers = 0;
    for (int i = 0; i < 2 * n; i++) {
        if (times.at(i).second == 'A')
            max_customers = max(max_customers, ++current_customers);
        else
            current_customers--;
    }

    cout << max_customers;

    return 0;
}