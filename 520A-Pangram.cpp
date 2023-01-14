#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,count=0;cin>>a;
    string n;cin>>n;
    for(int i=0;i<n.size();i++){
        n[i]=tolower(n[i]);
    }
    sort(n.begin(),n.end());

    for(int i=0;i<a;i++){
        if(n[i]!=n[i+1]){
            count++;
        }
    }
    

   if(count==26){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
    
    
}