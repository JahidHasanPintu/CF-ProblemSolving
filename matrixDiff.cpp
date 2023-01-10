#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

         int a=1;
           int b=n*n;
           int arr[n][n];
        
        for(int i=0;i<n;i++){
          
            if(i%2==0){
                for(int j=0;j<n;j++){
                     if(i%2==0){
                        arr[i][j]=a++;
                     }else{
                        arr[i][j]=b--;
                     }
                }
                
            }else{
                for(int j=n-1;j>=0;j--){
                     if(i%2==0){
                        arr[i][j]= b--;
                     }else{
                        arr[i][j]=a++;
                     }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}