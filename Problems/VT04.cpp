/*
    @date: 04 / 05 / 2024
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

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, x; cin >> n >> x;
    vi a(n); 
    for (int &c : a) {
        cin >> c;
        if (c == x) {
            cout << "YES";
            return 0;
        }
    }    
    cout << "NO";
}