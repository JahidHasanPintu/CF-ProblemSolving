#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int cons=1;
    for(int i=0;i<s.size()-1;i++){
        if(cons==7){
            break;
        }
        if(s[i]==s[i+1]){
            cons++;
        }else{
            cons=1;
        }
    }
    if(cons==7){
        cout<<"YES"<<endl;
    }else{
         cout<<"NO"<<endl;
    }
   
}