/*
    @date: 02 . 06 . 2024
    @tienle0103
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <cmath>
#include <stack>

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

str a, b;
stack <int> res;

void solve() {
    if (a.size() > b.size()) swap(a, b);
    reverse(all(a));
    reverse(all(b));
    int ram = 0;
    fr (i, 0, a.size()) {
        int add = (a[i] - '0') + (b[i] - '0') + ram;
        res.push(add % 10);
        ram = add / 10;
    }
    fr (i, a.size(), b.size()) {
        int add = (b[i] - '0') + ram;
        res.push(add % 10);
        ram = add / 10;
    }
    if (ram) res.push(ram);
    while (!res.empty()) {
        cout << res.top();
        res.pop();
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> a >> b;
    solve();
}