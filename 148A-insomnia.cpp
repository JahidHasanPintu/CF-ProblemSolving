    
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, m, d,i,count=0;
    cin>>k>>l>>m>>n>>d;

    for(i = 1; i <= d; i++)
    {
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0)
        {
            count++;
        }
    }

    
    cout<<count<<endl;
    

}