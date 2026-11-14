#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> movies;
    movies.reserve(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        movies.emplace_back(a, b);
    }

    sort(movies.begin(), movies.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });

    int max_movies = 0;
    int cur_time = 0;
    for (const auto mov : movies) {
        if (mov.first >= cur_time) {
            max_movies++;
            cur_time = mov.second;
        }
    }

    cout << max_movies;

    return 0;
}