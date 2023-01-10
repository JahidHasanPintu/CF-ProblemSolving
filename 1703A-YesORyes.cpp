#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int cnt=0;
    while(t--){
    
    string s1; cin>>s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    // cout<<s1<<endl;

        if(s1=="YES"){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    
        
}