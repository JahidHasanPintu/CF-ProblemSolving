#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int pol=0;
    int cnt=0;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(n<0){
            if(pol<1){
                cnt++;
            }else{
                pol--;
            }

        }else{
            pol=pol+n;
        }
        
    }
    cout<<cnt<<endl;
}