/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

main() {    
    int n; cin >> n;
    int mx = -696969669696969;
    vector<int> a(n); for (int &x : a) { cin >> x; mx = max(mx, x); }
    int res = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == mx)
            res = i;
    cout << res;
}
