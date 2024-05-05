/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

main() {    
    int n; cin >> n;
    vector<int> a(n); for (int &x : a) cin >> x;
    cout << *max_element(a.begin(), a.end());
}   