/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

main() {    
    int n; cin >> n;
    if (n == 0) { cout << "INF"; return 0; }
    n = abs(n);
    priority_queue<int> pq;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            pq.push(i);
            if (n / i != i)
                pq.push(n / i);
        }
    }
    while (!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }
}   