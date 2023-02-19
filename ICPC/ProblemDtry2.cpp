#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <T+1; i++) {
        int a, b, c, k;
        cin >> a >> b >> c >> k;
        int g = __gcd(a, b);
        int g2=__gcd(g, c);
         
        cout << "Case " << i << ": ";
        if (k % g2 == 0) {
            cout << "Peaceful" << endl;
        } else {
            cout << "Fight" << endl;
        }
        
    }
    return 0;
}