#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n+1];
    int ans[n+1];
    for(int i=1;i<n+1;i++){
        int a;
        cin>>a;
        arr[i]=a;
        ans[a]=i;
    }
    for(int i=1;i<n+1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}