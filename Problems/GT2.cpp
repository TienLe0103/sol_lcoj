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

int t;

void rizz(vi& num, int x) {
    int ram = 0;
    fr (i, 0, num.size()) {
        int add = num[i] * x + ram;
        num[i] = add % 10;
        ram = add / 10;
    }
    while (ram) {
        num.push_back(ram % 10);
        ram /= 10;
    }
}

string meow(int n) {
    vi sigma(1, 1);
    frr (i, 2, n) rizz(sigma, i);
    str res;
    for (auto i = sigma.rbegin(); i != sigma.rend(); i++) res += to_string(*i);
    return res;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> t;
    while (t--) {
        int x; cin >> x;
        cout << meow(x) << '\n';
    }   
}