#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> map(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    }

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    auto is_new_room = [&](auto&& self, int i, int j) -> bool {
        if (i < 0 || j < 0 || i >= n || j >= m) return false;
        if (map[i][j] == '#') return false;
        if (visited[i][j]) return false;
        visited[i][j] = true;

        self(self, i - 1, j);
        self(self, i + 1, j);
        self(self, i, j - 1);
        self(self, i, j + 1);

        return true;
    };

    int rooms = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (is_new_room(is_new_room, i, j))
                rooms++;
        }
    }

    cout << rooms;

    return 0;
}