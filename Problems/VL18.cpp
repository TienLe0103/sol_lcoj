/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

main() {    
    string n; cin >> n;
    reverse(n.begin(), n.end());
    while (n[0] == '0') 
        n.erase(n.begin());
    cout << n;
}   