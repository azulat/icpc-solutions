#include <bits/stdc++.h>

using namespace std;

void run_test_case();
bool recurse(vector<vector<int>>& adj, int depth, int prevNode, int curNode);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        run_test_case();
    }

    return 0;
}

void run_test_case() {
    int verts, edges;
    cin >> verts >> edges;

    vector<vector<int>> adj(verts, vector<int>());
    for (int i = 0; i < verts; i++) {
        adj[i] = vector<int>();
    }

    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;

        adj[u - 1].push_back(v - 1);
        adj[v - 1].push_back(u - 1);
    }

    for (int i = 0; i < verts; i++) {
        if (adj[i].empty()) {
            cout << "Brain Melt" << "\n";
            return;
        }
    }

    if (recurse(adj, 1, 0, 0) || edges <= verts - 2) {
        cout << "Many" << "\n";
    } else {
        cout << "2" << "\n";
    }
}

bool recurse(vector<vector<int>>& adj, int depth, int prevNode, int curNode) {
    if (depth >= 4) {
        return true;
    }

    for (const auto i : adj[curNode]) {
        if (i != prevNode && recurse(adj, depth+1, curNode, i)) {
            return true;
        }
    }

    return false;
}