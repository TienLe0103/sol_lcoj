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
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 1; i < n; i++) 
        if (a[i] != a.front()) {
            cout << a[i] << ' ';
            return 0;
        }
    cout << "NOT FOUND";
}
