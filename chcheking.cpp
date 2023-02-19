#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        char c; cin>>c;
        string s= "codeforces";
        int cnt=0;
        for(int j=0;j<10;j++){
            if(s[j]==c){
                cnt++;
                break;
            }
        }
        if(cnt==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}