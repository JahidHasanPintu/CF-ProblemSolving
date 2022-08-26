#include <iostream>
using namespace std;

int main()
{
    int n, i;
    string results = "";
    cin >> n;
    for (i = 1; i < n + 1; i++)
    {
        if (i % 2 == 0)
        {
            results = results + "I love";
        }
        else
        {
            results = results + "I hate";
        }
        if (i == n)
        {
            results = results + " it";
        }
        else
        {
            results = results + " that ";
        }
    }

    cout << results << endl;

    return 0;
}