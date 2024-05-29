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
int n, m, k, res = 0;
bool a[N][N], vst[N][N];
queue<ii> q;

void bfs(ii s) {
    q.push(s);
    vst[s.fi][s.se] = true;
    int c = 1;
    while (!q.empty()) {
        int u = q.front().fi;
        int v = q.front().se;
        q.pop();
        fr (i, 0, 4) {
            int x = u + dx[i];
            int y = v + dy[i];
            if (x < 1 || x > n) continue;
            if (y < 1 || y > m) continue;
            if (a[x][y] && !vst[x][y]) {
                c++;
                q.push({x, y});
                vst[x][y] = true;
            }
        }
    }
    res = max(res, c);
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n >> m >> k;
    while (k--) {
        int x, y; cin >> x >> y;
        a[x][y] = true;
    }   
    frr (i, 1, n)   
        frr (j, 1, m) 
            if (a[i][j] && !vst[i][j])
                bfs({i, j});
    cout << res;
}