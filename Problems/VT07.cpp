/*
    @date: 07 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long
#define vi vector<int>

using namespace std;

signed main() {
    vi a(11); for (int &x : a) cin >> x;
    bool ok = false;
    for (int i = 0; i < 10; i++) {
        if (a[i] == a[10]) {
            cout << i + 1 << ' ';
            ok = true;
        }
    }
    if (!ok) cout << "-1";
}