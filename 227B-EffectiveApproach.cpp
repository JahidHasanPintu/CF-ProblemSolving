#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        arr[a]=i;

    }
    for(int i=1;i<=n;i++){
       cout<<arr[i]<<endl;

    }


    // int m; cin>>m;
    // int arr2[m];
    // for(int i=1;i<=m;i++){
    //     cin>>arr2[i];
    // }
    // int vasya=0,petya= 0;
    // for(int i=1;i<=m;i++){
    //     for(int j=1;j<=n;j++){
    //         if(arr2[i]==arr[j]){
    //             vasya+= j;
    //             break;
    //         }
    //     }
       
    // }

    // for(int i=1;i<=m;i++){
       
    //     int count=0;
    //     for(int j=n;j>0;j--){
    //         count++;
    //         if(arr2[i]==arr[j]){
    //             petya+= count;
    //             break;
    //         }
    //     }
    // }
    // cout<<vasya<<" "<<petya<<endl;


}