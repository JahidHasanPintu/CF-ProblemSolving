#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        vector<int>arr;
        int n,ans=0;cin>>n;

        if(n%10!=0){
            arr.push_back(n%10);
            ans=n%10;
            n-=ans;
        }
        if(n%100!=0){
            arr.push_back(n%100);
            ans=n%100;
            n-=ans;
        }
        if(n%1000!=0){
            arr.push_back(n%1000);
            ans=n%1000;
            n-=ans;
        }
        if(n%10000!=0){
            arr.push_back(n%10000);
            ans=n%10000;
            n-=ans;
        }
        if(n%10000==0 && n>=10000){
            arr.push_back(n);
           
        }
        cout<<arr.size()<<endl;
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}