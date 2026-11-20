#include <bits/stdc++.h>

using namespace std;
using uint = unsigned int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1, vector<int>());
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<bool> visited(n + 1, false);
    vector<int> main_nodes;
    main_nodes.reserve(n + 1);

    auto new_cluster = [&](auto&& self, int i) -> bool {
        if (visited[i]) return false;
        visited[i] = true;

        for (const int a : adj[i]) {
            if (!visited[a]) self(self, a);
        }

        return true;
    };

    for (int i = 1; i <= n; i++) {
        if (new_cluster(new_cluster, i)) {
            main_nodes.push_back(i);
        }
    }

    int k = main_nodes.size() - 1;
    cout << k << "\n";

    for (uint i = 1; i < main_nodes.size(); i++) {
        cout << main_nodes[i - 1] << " " << main_nodes[i] << "\n";
    }

    return 0;
}