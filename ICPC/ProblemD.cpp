#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int a, b, c, k;
        cin >> a >> b >> c >> k;
        int g = gcd(gcd(a, b), c);
        cout << "Case " << i << ": ";
        if (k % g == 0) {
            cout << "Peaceful" << endl;
        } else {
            cout << "Fight" << endl;
        }
    }
    return 0;
}