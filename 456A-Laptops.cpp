#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int cnt=0;
    int a[t],b[t];
    int i=0;
    while(t--){
    
    
    cin>>a[i]>>b[i];
    i++;


    }
    sort(a,a+t);
    sort(b,b+t);
    if(a[0]>a[1]&&b[0]>b[1]){
        cout<<"Happy Alex"<<endl;
    }else{
        cout<<"Poor Alex"<<endl;
    }
    
        
}