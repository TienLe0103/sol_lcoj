/*
    @date: 03 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

main() {
    double a, b, c; cin >> a >> b >> c;
    cout << fixed << setprecision(2);
    if (a == 0) {
        if (b == 0) cout << ((c == 0) ? "WOW" : "NO");
        else cout << -c / b;
    }
    else {
        double delta = b * b - 4 * a * c;
        if (delta < 0)
            cout << "NO";
        else {
            if (delta == 0)
                cout << -b / 2 * a;
            else {
                double x1 = (-b + sqrt(delta)) / (2 * a);
                double x2 = (-b - sqrt(delta)) / (2 * a);
                cout << min(x1, x2) << ' ' << max(x1, x2);
            }
        }
    }
}