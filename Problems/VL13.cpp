/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

int check(int n) {
    int res = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            res += i;
            if (n / i != i)
                res += n / i;
        }
    }
    return res - n;
}

main() {    
    int n; cin >> n;
    cout << ((n == check(n)) ? "YES" : "NO");
}   