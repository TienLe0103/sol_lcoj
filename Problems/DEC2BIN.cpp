/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

void solve() {
    int n; cin >> n;
    stack<int> st;
    while (n > 0) {
        st.push(n % 2);
        n /= 2;
    }
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << '\n';
}

main() {    
    int t; cin >> t;
    while (t--) {
        solve();
    }
}   