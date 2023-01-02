#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,b; cin>>n;
    int cnt=0,arr[12];
    for(int i=0;i<12;i++){
       cin>>arr[i];
    }
    sort(arr,arr+12);
    int sum=0;
    for(int i=11;i>=0;i--){
       if(sum<n){
        sum+=arr[i];
        cnt++;
       }else{
        break;
       }
    }
    if(sum<n){
      cout<<-1<<endl;
    }else{
      cout<<cnt<<endl;
    }
    

}