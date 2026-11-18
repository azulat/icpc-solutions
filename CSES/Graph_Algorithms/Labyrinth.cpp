#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    queue<pair<int, int>> q;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<char>> lab(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> lab[i][j];
            if (lab[i][j] == 'A') {
                q.emplace(i, j);
                visited[i][j] = true;
            }
        }
    }

    vector<vector<char>> reached_by(n, vector<char>(m, '\0'));

    while (!q.empty()) {
        int i, j;
        tie(i, j) = q.front();
        q.pop();

        if (lab[i][j] == '#') continue;

        if (lab[i][j] == 'B') {
            char cur = reached_by[i][j];
            string desc = "";
            while (cur != '\0') {
                desc.push_back(cur);
                switch (cur) {
                    case 'U': i++; break;
                    case 'D': i--; break;
                    case 'R': j--; break;
                    case 'L': j++; break;
                }

                cur = reached_by[i][j];
            }

            reverse(desc.begin(), desc.end());
            
            std::cout << "YES\n" << desc.length() << "\n" << desc;
            return 0;
        }

        if (i > 0 && !visited[i - 1][j]) {
            q.emplace(i - 1, j);
            visited[i - 1][j] = true;
            reached_by[i - 1][j] = 'U';
        }
        if (i < n - 1 && !visited[i + 1][j]) {
            q.emplace(i + 1, j);
            visited[i + 1][j] = true;
            reached_by[i + 1][j] = 'D';
        }
        if (j > 0 && !visited[i][j - 1]) {
            q.emplace(i, j - 1);
            visited[i][j - 1] = true;
            reached_by[i][j - 1] = 'L';
        }
        if (j < m - 1 && !visited[i][j + 1]) {
            q.emplace(i, j + 1);
            visited[i][j + 1] = true;
            reached_by[i][j + 1] = 'R';
        }
    }

    std::cout << "NO";

    return 0;
}