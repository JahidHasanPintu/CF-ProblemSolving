#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    int a, ans;
    for (int i = 1; i <= n; i++) {
      cin >> arr[i];
    }
    a = arr[1];
    ans = 1;
    int count = 0;
    for (int i = 2; i <= n; i++) {
      if (arr[i] == a) {
        count++;
      } else {
        ans = i;
      }
    }
    if (count == 0) {
      cout << 1 << endl;
    } else {
      cout << ans << endl;
    }
  }
}