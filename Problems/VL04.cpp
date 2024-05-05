/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

main() {
    int n; cin >> n;
    double res = 0.0;
    for (int i = 2; i <= n; i++)
        res += 1.0 / i;
    cout << fixed << setprecision(4) << res;
}