#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[1005],brr[1005],max=0;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i]>>brr[i];
        
    }
    int rem,temp=brr[0]; max=brr[0];
    for(int i=1;i<n;i++){
        rem= temp-arr[i];
        // rem= brr[0]-arr[1];
        temp= rem+brr[i];
        if(temp>max){
            max=temp;
        }
        
    }
    cout<<max<<endl;
}