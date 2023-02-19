#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string chk="314159265358979323846264338327950288";
        string str;cin>>str;
        int cnt=0;
        for(int i=0;i<str.size();i++){
            if(str[i]==chk[i]){
                cnt++;
            }else{
                break;
            }
        }
        cout<<cnt<<endl;
    }
}