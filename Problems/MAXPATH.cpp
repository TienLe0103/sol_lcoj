/*
    @date: 07 . 06 . 2024
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

cs int N   = 1e3 + 5;
cs int oo  = 1e18;

int dx[] = {0, -1, 1};
int dy[] = {1, 1, 1};
int n, m, a[N][N], dist[N][N], res = -oo;
queue<ii> q;

void bfs() {
    frr (i, 1, n) frr (j, 1, m) dist[i][j] = -1;
    frr (i, 1, n) {
        dist[i][1] = a[i][1];
        q.push({i, 1});
    }
    while (!q.empty()) {
        ii u = q.front();
        q.pop();
        fr (i, 0, 3) {
            int x = u.fi + dx[i];
            int y = u.se + dy[i];
            if (x < 1 || x > n || y < 1 || y > m) continue;
            if (dist[x][y] == -1 || dist[x][y] < dist[u.fi][u.se] + a[x][y]) {
                dist[x][y] = dist[u.fi][u.se] + a[x][y];
                q.push({x, y});
            }
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n >> m;
    frr (i, 1, n) frr (j, 1, m) cin >> a[i][j];
    bfs();
    frr (i, 1, n) res = max(res, dist[i][m]);
    cout << res;
}