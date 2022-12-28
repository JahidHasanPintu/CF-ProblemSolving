#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n],br[n];
    int aZero=0,aOne=0,bZero=0,bOne=0;
    for(int i=0;i<n;i++){
        cin>>ar[i]>>br[i];
        if(ar[i]==0){
            aZero++;
        }else{
            aOne++;
        }
        if(br[i]==0){
            bZero++;
        }else{
            bOne++;
        }
    }
    // int aSmall;
    // if(aZero<aOne || aZero ==aOne){
    //     aSmall=aZero;
    // }else{
    //     aSmall=aOne;
    // }
    // int bSmall;
    // if(bZero<bOne || bZero ==bOne){
    //     bSmall=bZero;
    // }else{
    //     bSmall=bOne;
    // }

    cout<<min(aZero,aOne)+min(bZero,bOne)<<endl;
}