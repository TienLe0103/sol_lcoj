/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

main() {
    string n; cin >> n;
    cout << ((n[0] == '-') ? n.size() - 1 : n.size());        
}   