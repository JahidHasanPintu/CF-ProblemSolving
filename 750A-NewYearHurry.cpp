#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int rem=240-b;
    int necessary=0;
    int cnt=0;
    for(int i=1;i<=a;i++){
        necessary+=i*5;
        if(necessary<=rem){
            cnt++;
        }
        
    }
    cout<<cnt<<endl;
}