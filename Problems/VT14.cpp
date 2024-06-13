#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

signed main() {
    int n; cin >> n;
    int a[n]; for (int &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    cout << ((a[0] * a[1] > a[n - 1] * a[n - 2]) ? a[0] * a[1] : a[n - 1] * a[n - 2]);
}