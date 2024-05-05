/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return abs(a);
}

main() {    
    int a, b; cin >> a >> b;
    if (b == 0) { cout << "INVALID"; return 0; }
    int g = gcd(a, b);
    if (abs(b) / g == 1) 
        cout << ((b < 0) ? -a / g : a / g);
    else 
        cout << ((a > 0) ? (b > 0 ? a / g : -a / g) : (b > 0 ? a / g : -a / g)) << ' ' << ((b > 0) ? b / g : -b / g);
}   