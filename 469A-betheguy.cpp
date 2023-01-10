#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arrSize1;cin>>arrSize1;
    int arr[300];
    for(int i=0;i<arrSize1;i++){
        cin>>arr[i];
    }
    int arrSize2;cin>>arrSize2;
    for(int i=arrSize1;i<arrSize1+arrSize2;i++){
        cin>>arr[i];
    }
    sort(arr,arr+(arrSize1+arrSize2));
    int cnt=0;
    for(int i=0;i<arrSize1+arrSize2;i++){
        if(arr[i]!=arr[i+1]){
            cnt++;
        }
    }
    if(n==cnt){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}