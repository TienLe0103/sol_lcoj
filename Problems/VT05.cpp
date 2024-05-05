/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <iostream>
#include <algorithm>
#include <string> 
#include <vector>
#include <map>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

#define         int                 long long
#define         db                  double
#define         str                 string
#define         vi                  vector<int>
#define         gi                  greater<int>
#define         mii                 map<int, int>
#define         pii                 pair<int, int>
#define         fi                  first
#define         se                  second
#define         all(x)              x.begin(), x.end()
#define         rall(x)             x.rbegin(), x.rend()
#define         fr(x, l, r)         for (int x = l; x < r; x++)
#define         frr(x, l, r)        for (int x = l; x <= r; x++)
#define         frd(x, l, r)        for (int x = l; x >= r; x--)
#define         cs                  const

cs int mxn = 1e6 +5;
cs int oo = 0x7fffffff;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int check(vi &a, int x) {
    int l = 0, r = a.size() - 1;
    int res = 0;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] >= x) {
            r = m - 1;
            res++;
        }
        else
            l = m + 1;
    }
    return res;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, target; cin >> n >> target;
    vi a(n); for (int &x : a) cin >> x;
    sort(all(a));
    cout << check(a, target);
}