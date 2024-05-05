/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

main() {
    int x, n; cin >> x >> n;
    int a = 1, b = 1;
    double res = 0;
    for (int i = 1; i <= n; i++) { 
        a *= x;
        b *= i;
        res += (double)a / b;
    }
    cout << fixed << setprecision(2) << res;
}   