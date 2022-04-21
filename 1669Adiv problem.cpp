#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, rating;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> rating;
        if (rating >= 1900)
        {
            cout << "Division 1";
        }
        else if (rating >= 1600 && rating <= 1899)
        {
            cout << "Division 2";
        }
        else if (rating >= 1400 && rating <= 1599)
        {
            cout << "Division 3";
        }
        else if (rating <= 1399)
        {
            cout << "Division 4";
        }
    }
}