#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    set<int> primes;
    int facts = 0;
    for (int d = 2; d * d <= n; ++d) {
        while (n % d == 0) {
            primes.insert(d);
            facts++;
            n /= d;
        }
    }
    if (n > 1) {
        primes.insert(n);
        facts++;
    }

    if (facts <= 1) {
        cout << "1" << "\n";
        cout << "1 1";
        return 0;
    }

    cout << primes.size() << "\n";
    for (int p : primes) cout << "1 " << p << "\n";

    return 0;
}