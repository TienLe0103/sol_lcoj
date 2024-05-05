/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

main() {
    int n; cin >> n;
    int res = 0;
    for (int i = 1; i <= (3 * n + 1); i++)
        if (i % 2 != 0)
            res += i;
        else 
            res -= i;
    cout << res;
}