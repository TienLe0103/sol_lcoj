/*
@date: 05 / 05 / 2024
@tienle0103
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

int solve(int x) {
return (-1 + sqrt(1 + 8 * x)) / 2;
}

main() {    
int n; cin >> n;
cout << solve(n);
}   