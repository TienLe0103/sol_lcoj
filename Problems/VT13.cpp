
/*
    @date: 29 . 05 . 2024
    @tienle0103
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <cmath>

using namespace std;

#define int            long long
#define fi             first
#define se             second
#define all(x)         x.begin(), x.end()
#define rall(x)        x.rbegin(), x.rend()
#define fr(x, l, r)    for (int x = l; x < r; x++)
#define frr(x, l, r)   for (int x = l; x <= r; x++)
#define fd(x, l, r)    for (int x = l; x >= r; x--)
#define cs             const

typedef double         db;
typedef string         str;
typedef vector<int>    vi;
typedef greater<int>   gi;
typedef map<int, int>  mii;
typedef pair<int, int> ii;

cs int N   = 1e6 + 5;
cs int oo  = 1e18;

int n, a[N];
ii res = {-696969, -696969};

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n;
    fr (i, 0, n) cin >> a[i];
    res = {a[0], a[1]};
    fr (i, 0, n - 1) 
        if (a[i] + a[i + 1] >= res.fi + res.se)
            res = {a[i], a[i + 1]};
    if (a[n - 1] + a[0] > res.fi + res.se) cout << a[n - 1] << ' ' << a[0];
    else cout << res.fi << ' ' << res.se;
}
