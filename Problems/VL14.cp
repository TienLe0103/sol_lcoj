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
    return a;
}

main() {    
    int a, b; cin >> a >> b;
    a = abs(a);
    b = abs(b);
    cout << gcd(a, b);
}   