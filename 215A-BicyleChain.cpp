#include<bits/stdc++.h>
using namespace std;
int main(){
    
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }
        int m; cin>>m;
        int arr1[m];
        for(int i=0;i<m;i++){
            cin>>arr1[i];
            
        }
        // int ans=1,max=0;
        vector<int>b;
    
        for(int i=0;i<m;i++){
            for(int j=0;j<n;i++){
                // cout<<"checking loop"<<endl;
                if(arr1[j]%arr[i]==0){
                     b.push_back(arr1[j]/arr[i]);
                    

                }
            }
        }
        int max = *max_element(b.begin(),b.end());
    cout<<count(b.begin(),b.end(),max)<<endl;
}