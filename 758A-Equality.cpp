#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    sort(arr,arr+t);
    int cnt=0;
    for(int i=0;i<t;i++){
        cnt+= arr[t-1]-arr[i];
    }
    cout<<cnt<<endl;
}