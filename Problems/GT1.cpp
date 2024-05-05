/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

int gt(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * gt(n - 1);
}

main() {
    int n; cin >> n;
    cout << gt(n);
}