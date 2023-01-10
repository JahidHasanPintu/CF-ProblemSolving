#include<bits/stdc++.h>
using namespace std;
int findFactorial(int n){
    int fact=1;
    if(n==0||n==1){
        return 1;
    }else{
        for(int i=n;i>0;i--){
        fact=fact*i;
        }
    // return n*findFactorial(n-1);
        return fact;
    }
    
}
int main(){
    int t; cin>>t;
    while (t--)
    {
        int k,ans;
        cin>>k;
        ans=k-1;
        // for(int i=k-1;i>0;i--){
        //     int temp= findFactorial(i)+findFactorial(i-1);
        //     if(temp%k==0){
        //         ans=i;
        //         break;
        //     }else{
        //         ans=-1;
        //     }
        // }
        cout<<ans<<endl;
    }
    
    
    
}