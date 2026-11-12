#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

void print_gray(int n, string gray = "", bool rev = false);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    print_gray(n);

    return 0;
}


void print_gray(int n, string gray, bool rev) {
    if (n == 0) {
        cout << gray << "\n";
        return;
    }

    if (!rev) {
        print_gray(n - 1, gray + "0", false);
        print_gray(n - 1, gray + "1", true);
    } else {
        print_gray(n - 1, gray + "1", false);
        print_gray(n - 1, gray + "0", true);
    }
}