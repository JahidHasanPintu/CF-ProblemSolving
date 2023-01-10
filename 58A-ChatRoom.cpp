#include<bits/stdc++.h>
using namespace std;
int main()
{
    char p[110];
    gets(p);
    int len=strlen(p);
    int a=len,b=len,c=len,d=len;
    int flag=0;
    for(int i=0;i<len;i++)
    {
        if(p[i]=='h')
        {
            a=i+1;
            break;
        }
    }
    for(int i=a;i<len;i++)
    {
        if(p[i]=='e')
        {
            b=i+1;
            break;
        }
    }
    for(int i=b;i<len;i++)
    {
        if(p[i]=='l')
        {
            c=i+1;
            break;
        }
    }
    for(int i=c;i<len;i++)
    {
        if(p[i]=='l')
        {
            d=i+1;
            break;
        }
    }
    for(int i=d;i<len;i++)
    {
        if(p[i]=='o')
        {
            flag=1;
        }
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
}