#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,s,r;
        cin>>n>>s>>r;
        int first=s-r;
        int temp=first;
        for(int i=0;i<n-2;i++){
            cout<<1<<" ";
            temp--;
        }
        cout<<temp<<" "<<first<<endl;
    }
}