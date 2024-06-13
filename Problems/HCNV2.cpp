/*
    @date: 13 . 06 . 2024
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

ii a, b, c, d;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> a.fi >> a.se >> b.fi >> b.se >> c.fi >> c.se >> d.fi >> d.se;
    ii l = {min(a.fi, b.fi), min(c.fi, d.fi)};
    ii r = {max(a.fi, b.fi), max(c.fi, d.fi)};
    ii u = {min(a.se, b.se), min(c.se, d.se)};
    ii v = {max(a.se, b.se), max(c.se, d.se)};
    cout << ((max(l.fi, l.se) < min(r.fi, r.se) && max(u.fi, u.se) < min(v.fi, v.se)) ? (min(r.fi, r.se) - max(l.fi, l.se)) * (min(v.fi, v.se) - max(u.fi, u.se)) : 0);
}