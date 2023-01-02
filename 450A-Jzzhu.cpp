#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;double m; cin>>n>>m;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    float temp=0; int ans=0;
     for(int i=1;i<=n;i++){
        if(ceil(arr[i]/m) >=temp){
            temp =ceil(arr[i]/m);
            ans=i;
           
        }
    }
    // if(temp!=0){
    //     cout<<temp<<endl;
    // }else{
    //     cout<<n<<endl;
    // }
    cout<<ans<<endl;
    
}