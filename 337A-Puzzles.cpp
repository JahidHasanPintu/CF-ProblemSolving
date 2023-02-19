#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[55];
    for(int i=0;i<m;i++)
        scanf("%d",arr+i);
    sort(arr,arr+m);
    int min=10000;
    for(int i=0;i+n-1<m;i++)
        if(arr[i+n-1]-arr[i]<min)
            min=arr[i+n-1]-arr[i];
    printf("%d",min);
}