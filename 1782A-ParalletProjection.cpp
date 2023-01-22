#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
       int w,d,h,a,b,f,g;
       cin>>w>>d>>h;
       cin>>a>>b>>f>>g;
       int minimum=100000000;
        int temp1= abs(b-g)+abs(w-f)+abs(w-a);
        int temp2= abs(b-g)+abs(0-f)+abs(0-a);
        int temp3= abs(a-f)+abs(0-b)+abs(0-g);
        int temp4= abs(a-f)+abs(d-b)+abs(d-g);
        minimum=min(minimum,temp1);
        minimum=min(minimum,temp2);
        minimum=min(minimum,temp3);
        minimum=min(minimum,temp4);
        minimum=minimum+h;
        cout<<minimum<<endl;
        
    }
}