/*
    @date: 04 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

bool check(int y) {
    return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}

main() {
    int y; cin >> y;
    if (y < 1 || y > 100000)
        cout << "INVALID";
    else    
        cout << ((check(y)) ? "YES" : "NO");
}