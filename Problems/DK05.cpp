/*
    @date: 03 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

bool check(int x) {
    return sqrt(x) == (int)sqrt(x);
}

main() {
    int n; cin >> n;
    cout << ((check(n)) ? "YES" : "NO");
}