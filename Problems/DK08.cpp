/*
    @date: 04 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

main() {
    double a, b;
    char k;
    cin >> a >> k >> b;
    cout << fixed << setprecision(2);
    if (k == '+')
        cout << a + b;
    else if (k == '-')
        cout << a - b;
    else if (k == '*')
        cout << a * b;
    else 
        if (b == 0)
            cout << "Math Error";
        else 
            cout << a / b;
}