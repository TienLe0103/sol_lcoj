/*
    @date: 03 / 05 / 2024
    @tienle0103
*/

#include <iostream>
#include <iomanip>

using namespace std;

main() {
    double a, b; cin >> a >> b;
    cout << a + b << '\n';
    cout << a - b << '\n';
    cout << a * b << '\n';
    if (b == 0) cout << "ERROR\n";
    else    
        cout << fixed << setprecision(2) << a / b;
}