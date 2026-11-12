#include <bits/stdc++.h>

using namespace std;

int r, c;
vector<vector<int>> menu = vector<vector<int>>(100, vector<int>(100, 0));

int max_dishes_from(int is, int js) {
    set<tuple<int, int, int>> vals;
    vals.emplace(is, js, menu[is][js]);
    int count = 0;

    while (!vals.empty()) {
        auto [i, j, max_val] = *vals.begin();
        vals.erase(vals.begin());
        count++;
        
        if (i - 1 >= 0 && menu[i - 1][j] > max_val) {
            vals.emplace(i - 1, j, menu[i - 1][j]);
        }

        if (j - 1 >= 0 && menu[i][j - 1] > max_val) {
            vals.emplace(i, j - 1, menu[i][j - 1]);
        }

        if (i + 1 < r && menu[i + 1][j] > max_val) {
            vals.emplace(i + 1, j, menu[i + 1][j]);
        }

        if (j + 1 < c && menu[i][j + 1] > max_val) {
            vals.emplace(i, j + 1, menu[i][j + 1]);
        }
    }

    // cout << is << " " << js << " " << count << endl;
    
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> r >> c;

    int max_dishes = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> menu[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            max_dishes = max(max_dishes, max_dishes_from(i, j));
        }
    }

    cout << max_dishes;

    return 0;
}