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

str a;
int b;

str rizz(str a, str b) {
    int l1 = a.size(), l2 = b.size();
    str res (l1 + l2, '0');
    fd (i, l1 - 1, 0) {
        int ram = 0;
        fd (j, l2 - 1, 0) {
            int add = (a[i] - '0') * (b[j] - '0') + (res[i + j + 1] - '0') + ram;
            ram = add / 10;
            res[i + j + 1] = add % 10 + '0';
        }
        res[i] += ram;
    }
    size_t sus = res.find_first_not_of('0');
    if (string::npos != sus) return res.substr(sus);
    return "0";
}

str meow(str a, int b) {
    if (b == 0) return "1";
    if (b == 1) return a;
    str res = "1";
    while (b > 0) {
        if (b % 2 == 1) res = rizz(res, a);
        a = rizz(a, a);
        b /= 2;
    }
    return res;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> a >> b;
    cout << meow(a, b);   
}