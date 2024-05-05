/*
    @date: 05 / 05 / 2024
    @tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

main() {    
    int a, b; cin >> a >> b;
    if (a < b) swap(a, b);
    int check = 0;
    for (int i = a - 1; i > b; i--)
        if (i % 3 == 0) {
            cout << i << ' ';
            check++;
        }
    if (check == 0) cout << "NOT FOUND";
}   