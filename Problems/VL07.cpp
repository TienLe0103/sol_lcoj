/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

int C(int n, int k) {
    if (k == 0 || k == n) 
        return 1;
    if (k == 1)
        return n;
    return C(n - 1, k - 1) + C(n - 1, k);
}

main() {
    int n, k; cin >> n >> k;
    cout << C(n, k);
}