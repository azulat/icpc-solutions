#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> k(n);
    for (int i = 0; i < n; i++) cin >> k[i];
    
    int l = -1;
    int longest = 0;

    map<int, int> songs;
    for (int r = 0; r < n; r++) {
        int ki = k[r];
        auto it = songs.find(ki);
        
        if (it != songs.end()) {
            l = max(l, it->second);
            it->second = r;
        } else {
            songs[ki] = r;
        }

        longest = max(longest, r - l);
    }

    cout << longest;

    return 0;
}