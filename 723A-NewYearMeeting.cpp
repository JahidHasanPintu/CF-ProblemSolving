#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;cin>>a>>b>>c;
    int min1=abs(a-b)+abs(a-c);
    int min2=abs(b-c)+abs(b-a);

    int min3=abs(c-b)+abs(c-a);
    if(min1<min2 and min1<min3){
        cout<<min1<<endl;
    }else if(min2<min1 and min2<min3){
        cout<<min2<<endl;
    }else if(min3<min2 and min3<min1){
        cout<<min3<<endl;
    }
    
}