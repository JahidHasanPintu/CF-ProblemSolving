#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();

    // declaring character array
    char char_array[n + 1];

    // copying the contents of the
    // string to char array
    strcpy(char_array, s.c_str());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // printing the array
        // cout << char_array[i] << endl;
        if (char_array[i] == char_array[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}