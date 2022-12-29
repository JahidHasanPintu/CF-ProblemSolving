#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n;cin>>n;
        int arr[n];
        int max=0,secMax=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr[i]=a;
            if(a>max){
                secMax=max;
                max=a;
                
            }else if(a>secMax){
                secMax=a;
            }

        }
        for(int i=0;i<n;i++){
            if(arr[i]==max){
                cout<<max-secMax<<" ";
            }else{
                cout<<arr[i]-max<<" ";
            }
        }
        // sort(arr,arr+n);
        cout<<endl;

    }
}