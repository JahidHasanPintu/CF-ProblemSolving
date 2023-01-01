#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans;cin>>n;
    int rem=n;
    int arr[8];
    for(int i=1;i<8;i++){
            cin>>arr[i];
        }
    while(rem>0){
        for(int i=1;i<8;i++){
            rem= rem-arr[i];
            if(rem<1){
                ans=i;
                break;
            }
        }
    }
    cout<<ans<<endl;
}