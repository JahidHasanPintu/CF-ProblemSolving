#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,cnt=0,r=0;
        cin>>n;
       vector<int>arr(n);
        for(int j=0;j<n;j++){
            
            cin>>arr[j];
            
            if(arr[j]==1){
                cnt++;
            }else if(arr[j]>1){
                r++;
            }
        }
        if(cnt%2==0){
            r += cnt/2;
        }else{
            r+= cnt/2+1;
        }
        cout<<r<<endl;
    }
}