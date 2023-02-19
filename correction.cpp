#include <bits/stdc++.h>
using namespace std;

void deleteValue(list<int> &l, int value) {
    for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
        if (*it == value) {
            l.erase(it);
            break;
        }
    }
}

int main() {
    list<int> l = {7, 3, 8, 4, 5, 4};
    int value = 4;

    cout << "STL list before deletion: ";
    for (int i : l) cout << i << " ";
    cout << endl;

    deleteValue(l, value);

    cout << "STL list after deletion: ";
    for (int i : l) cout << i << " ";
    cout << endl;

    return 0;
}
