#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    int ans,i=1;
    while(true){
        if((a*3)>(b*2)){
            ans=i;
            break;
        }
            a=a*3;
            b=b*2;
        
        i++;
    }
    
    // for(int i=1;b>=a;i++){
    //     if((a*3)>(b*2)){
    //         ans=i;
    //         break;
    //     }

    // }
    cout<<ans<<endl;

}