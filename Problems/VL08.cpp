/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

int solve(int x) {
    if (x % 2 == 0)
        return (x / 2) * (x / 2 + 1);
    else    
        return ((x - 1) / 2) * ((x - 1) / 2 + 1);
}

main() {
    int a, b; cin >> a >> b;
    cout << solve(b) - solve(a - 1);
}