/*
    @date: 14 / 05 / 2024
    @tienle0103
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <cmath>

using namespace std;

typedef long long      ll;
typedef double         db;
typedef string         str;
typedef vector<int>    vi;
typedef greater<int>   gi;
typedef map<int, int>  mii;
typedef pair<int, int> ii;

#define fi             first
#define se             second
#define all(x)         x.begin(), x.end()
#define rall(x)        x.rbegin(), x.rend()
#define fr(x, l, r)    for (int x = l; x < r; x++)
#define frr(x, l, r)   for (int x = l; x <= r; x++)
#define frd(x, l, r)   for (int x = l; x >= r; x--)
#define cs             const

cs int mxn = 1e6 +5;
cs int N   = 1e3 + 5;
cs int oo  = 0x7fffffff;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int n, m;
vi a[mxn];
vector<priority_queue<int, vi, gi>> res;
bool vst[mxn];

void dfs(int u, priority_queue<int, vi, gi>& add) {
    vst[u] = true;
    add.push(u);
    for (auto v : a[u]) {
        if (!vst[v]) {
            dfs(v, add);
        }
    }   
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n >> m;
    while (m--) {
        int x, y; cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    frr (i, 1, n) {
        if (!vst[i]) {
            priority_queue<int,  vi, gi> add;
            dfs(i, add);
            res.push_back(add);
        }
    }
    cout << res.size() << '\n';
    for (auto x : res) {
        cout << x.size() << ' ';
        while (!x.empty()) {
            cout << x.top() << ' ';
            x.pop();
        }
        cout << '\n';
    }
}