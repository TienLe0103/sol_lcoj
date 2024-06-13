/*
    @date: 10 . 06 . 2024
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

str a, b;

str meow(str a, str b) {
    int l1 = a.size(), l2 = b.size(), x = 0, y = 0;
    if (l1 == 0 || l2 == 0) return "0";
    vi res(l1 + l2, 0);
    fd (i, l1 - 1, 0) {
        int ram = 0;
        int c1 = a[i] - '0';
        y = 0;
        fd (j, l2 - 1, 0) {
            int c2 = b[j] - '0';
            int add = c1 * c2 + res[x + y] + ram;
            ram = add / 10;
            res[x + y] = add % 10;
            y++;
        }
        if (ram > 0) res[x + y] += ram;
        x++;
    }
    int find = res.size() - 1;
    while (find >= 0 && res[find] == 0) find--;
    if (find == -1) return "0";
    str s = "";
    while (find >= 0) s += to_string(res[find--]);
    return s;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> a >> b;
    cout << meow(a, b);
}