#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

#define MOD 1000000007ull

ull dice_ways(int sum, unordered_map<int, ull>& mem) {
    if (sum < 0) return 0;
    
    auto it = mem.find(sum);
    if (it != mem.end()) return it->second;

    ull ways = 0;
    for (int i = 1; i <= 6; i++) {
        ways += dice_ways(sum - i, mem) % MOD;
        ways %= MOD;
    }

    mem[sum] = ways;
    return ways;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    unordered_map<int, ull> mem;
    mem.reserve(n);
    mem[0] = 1;

    cout << dice_ways(n, mem);

    return 0;
}