#include <iostream>
#include <iomanip>
#define in long long

using namespace std;

signed main() {
    cin.tie(nullptr); cout.tie(nullptr); ios_base::sync_with_stdio(false);
    int n; cin >> n;
    double res = 1;
    int tmp = 1;
    for (int i = 2; i <= n; ++i) {
        tmp += i;
        res += 1.0 / tmp;
    }
    cout << res;
}