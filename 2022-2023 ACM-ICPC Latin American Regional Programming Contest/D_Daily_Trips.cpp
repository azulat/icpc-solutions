#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h, w;
    cin >> n >> h >> w;

    for (int i = 0; i < n; i++) {
        char home_work, work_home;
        cin >> home_work >> work_home;

        if (home_work == 'Y' || w == 0) {
            h--; w++;
            cout << "Y ";
        } else {
            cout << "N ";
        }

        if (work_home == 'Y' || h == 0) {
            w--; h++;
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }
}