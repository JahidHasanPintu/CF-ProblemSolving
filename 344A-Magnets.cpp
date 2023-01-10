#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=arr[0],cnt=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=temp){
            cnt++;
            temp=arr[i];
        }
    }
    cout<<cnt<<endl;
}