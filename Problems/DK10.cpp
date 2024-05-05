/*
    @date: 04 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

int init[13] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool check(int y) {
    return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}

void solve() {
    int m, y; cin >> m >> y;
    if ((m < 1 || m > 12) || y < 1) { cout << "INVALID"; return; }
    if (m != 2)
        cout << init[m];
    else
        cout << ((check(y)) ? "29" : "28");
}

main() {
    solve();
}