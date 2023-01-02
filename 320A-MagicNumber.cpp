#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<(int)s.size();i++){
        // if(s[i]!='1' && s[i]!='4'){
        //     cout<<"NO"<<endl;
        // }else if(s[0]=='4'){
        //     cout<<"NO"<<endl;
        // }else if(s.find("444")!=s.npos){
        //     cout<<"NO"<<endl;
        // }else{
        //     cout<<"YES"<<endl;
        // }
         if((s[i]!='1' && s[i]!='4') ||(s[0]=='4') ||(s.find("444")!=s.npos) ){
           
           count++;
        }else{
            continue;
        }
        
    }
    if(count==0){
             cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
}