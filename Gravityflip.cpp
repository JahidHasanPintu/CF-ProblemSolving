#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    int ans[n+1];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;
        // ans[a]=i;
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}