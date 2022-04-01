#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int a,b,ans;
    
    cin>>a,b;
    cout<<a<<b<<endl;
    if(a==0){
        ans=1;        
    }else if(b==0){
        ans=a+1;
    }else{
        ans=a+(b*2)+1;
    }
    cout<<ans<<endl;
}