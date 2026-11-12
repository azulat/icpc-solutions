#include <bits/stdc++.h>
using namespace std;

void print_hanoi(int disks, int beg = 1, int end = 3, int aux = 2) {
    if (disks == 0) return;
    print_hanoi(disks - 1, beg, aux, end);
    cout << beg << " " << end << "\n";
    print_hanoi(disks - 1, aux, end, beg);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << pow(2, n) - 1 << "\n";
    print_hanoi(n);

    return 0;
}