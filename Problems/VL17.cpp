/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

int solve(int x) {
    x = abs(x);
    int res = 0;
    for (int i = 1; i <= sqrt(x); i++)
        if (x % i == 0)
            res += 2;
    if (sqrt(x) * sqrt(x) == x)
        res--;
    return res;
}

main() {    
    int n; cin >> n;
    cout << solve(n);
}   