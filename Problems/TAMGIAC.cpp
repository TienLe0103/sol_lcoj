/*
    @date: 05 . 06 . 2024
    @tienle0103
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <cmath>
#include <iomanip>

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

db a, b, c;

bool check (db a, db b, db c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

void solve() {
    cout << a + b + c << ' ';
    db p = (a + b + c) / 2;
    cout << fixed << setprecision(2) << sqrt(p * (p - a) * (p - b) * (p - c));
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> a >> b >> c;
    if (check (a, b, c)) solve();
    else cout << "NO";
}   