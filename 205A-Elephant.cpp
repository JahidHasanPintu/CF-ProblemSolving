#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int min=arr[1],ans=1,count=0; 
    for(int i=2;i<=n;i++){
        if(min>arr[i]){
            min=arr[i];
            ans=i;
        }
    }
    for(int i=1;i<=n;i++){
        if(min==arr[i]){
            count++;
        }
    }
    if(count<2){
        cout<<ans<<endl;
    }else{
        cout<<"Still Rozdil"<<endl;
    }
}