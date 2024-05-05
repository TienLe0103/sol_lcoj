/*
    @date: 03 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

main() {
    int a, b; cin >> a >> b;
    if (a == 0)
        if (b == 0)
            cout << "WOW";
        else
            cout << "NO";
    else
        cout << fixed << setprecision(2) << (double)-b / a;
}