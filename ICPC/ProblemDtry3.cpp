#include <bits/stdc++.h>
using namespace std;

bool peaceful_morning(int a, int b, int c, int k) {
    if (k == 0) {
        return (a == b) && (b == c);
    }
    if (a > b) {
        swap(a, b);
    }
    if (b > c) {
        swap(b, c);
    }
    if (a > c) {
        swap(a, c);
    }
    return (c - a <= k * 2) && (k > 0);
}

int main() {
    long long T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        long long a, b, c, k;
        cin >> a >> b >> c >> k;
        cout << "Case " << i << ": ";
        if (peaceful_morning(a, b, c, k)) {
            cout << "Peaceful" << endl;
        } else {
            cout << "Fight" << endl;
        }
    }
    return 0;
}
