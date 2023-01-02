#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,b; cin>>n>>m;
    int cnt=0;
    for(int i=0;i<=sqrt(n);i++){
       int b= n-(i*i);
        if((i+(b*b))==m){
            cnt++;
        }
    }
    cout<<cnt<<endl;

}