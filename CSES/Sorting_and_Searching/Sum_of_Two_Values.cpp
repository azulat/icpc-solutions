#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> a_og = a;

    sort(a.begin(), a.end());

    int i = 0, j = n - 1;
    while (i < j) {
        int sum = a[i] + a[j];

        if (sum > x) {
            j--;
        } else if (sum < x) {
            i++;
        } else {
            int num1 = find(a_og.begin(), a_og.end(), a[i]) - a_og.begin() + 1;
            int num2 = a_og.rend() - find(a_og.rbegin(), a_og.rend(), a[j]);

            cout << num1 << " " << num2;

            return 0;
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}