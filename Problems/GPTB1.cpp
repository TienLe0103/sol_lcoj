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

int a, b, c, d, e, f;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> a >> b >> c >> d >> e >> f;
    int D = a * e - b * d;
    int Dx = c * e - b * f;
    int Dy = a * f - c * d;
    if (D != 0) {
        cout << fixed << setprecision(2) << (db)Dx / D << " " << (db)Dy / D;
    } else {
        if (Dx == 0 && Dy == 0) cout << "VOSONGHIEM";
        else cout << "VONGHIEM";
    }

}   