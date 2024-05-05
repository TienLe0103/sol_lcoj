/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

main() {    
    char a, b; cin >> a >> b;
    for (char i = char((int)a - 32); i <= char((int)b - 32); i++)
        cout << i << ' ';
}   