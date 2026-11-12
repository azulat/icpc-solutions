#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

bool occupied_cols[8];
bool occupied_diag1[15];
bool occupied_diag2[15];

ull possible_ways(vector<string>& board, int row = 0) {
    if (row == 8) return 1;

    ull ways = 0;
    for (int col = 0; col < 8; col++) {
        if (board[row][col] == '*') continue;
        if (occupied_cols[col] || occupied_diag1[row - col + 7] || occupied_diag2[row + col]) continue;

        occupied_cols[col] = true;
        occupied_diag1[row - col + 7] = true;
        occupied_diag2[row + col] = true;

        ways += possible_ways(board, row + 1);

        occupied_cols[col] = false;
        occupied_diag1[row - col + 7] = false;
        occupied_diag2[row + col] = false;
    }

    return ways;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> board(8, string(8, '\0'));
    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }

    cout << possible_ways(board); 

    return 0;
}