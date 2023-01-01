#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0,similar=0,l=0;
        for(int i=0;i<n;i++){
            similar++;
            if(i==n-1){
                if(l==0 or arr[i]<arr[i-1]){
                    count++;
                }
            }else{
            if(arr[i]==arr[i+1]){
                continue;
            }else if(arr[i]>arr[i+1]){
                similar=0;
                l=i+1;
            }else{
                if(l==0 or arr[l]<arr[l-1]){
                    count++;
                    l=i+1;
                    similar=0;
                }
            }
        }
        }
       

        if(count==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }


}