#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        long long x; cin>>x;
        int cnt=0;
        for(int j=2;j<x/2+1;j++){
            if(cnt>2){
                break;
            }else if(x%j==0){
                cnt++;
            }
        }
        if(cnt==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}