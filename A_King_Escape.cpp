#include <bits/stdc++.h>

using namespace std;

bool is_checked(int x, int y, int qx, int qy);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ax, ay;
    cin >> ax >> ay;

    int bx, by;
    cin >> bx >> by;

    int cx, cy;
    cin >> cx >> cy;

    vector<vector<bool>> visited(n + 1, vector<bool>(n + 1, false));

    auto dfs = [&](auto&& self, int x, int y) -> bool {
        visited[x][y] = true;

        if (x == cx && y == cy) return true;

        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                if (i == 0 && j == 0) continue;
                
                int nx = x + i, ny = y + j;
                if (nx < 1 || ny < 1 || nx > n || ny > n) continue;
                if (visited[nx][ny] || is_checked(nx, ny, ax, ay)) continue;

                if (self(self, nx, ny)) return true;
            }
        }

        return false;
    };

    if (dfs(dfs, bx, by)) {
        cout << "YES";
    }  else {
        cout << "NO";
    }

    return 0;
}

bool is_checked(int x, int y, int qx, int qy) {
    return x == qx || y == qy || qx - x == qy - y || qx - x == - (qy - y);
}