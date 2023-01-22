#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int min,max;
    int temp=0;
    if(a>b){
        max=a;
        min=b;
        temp=(a-b)/2;
    }else if(b>a){
        max=b;
        min=a;
        temp=(b-a)/2;
    }else if(a==b){
        min=a;

    }
    cout<<min<<" "<<temp<<endl;

}