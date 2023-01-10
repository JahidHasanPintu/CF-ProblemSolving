#include<bits/stdc++.h>
using namespace std;
int main(){
     int n; cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+= arr[i];
            
        }
        // cout<<sum<<endl;
         int a = sizeof(arr) / sizeof(arr[0]);
 
    sort(arr, arr + a, greater<int>());
        int sum2=0,cnt=0;
        for(int i=0;i<n;i++){
            sum2+=arr[i];
            int rem=sum-sum2;
            // printf("Sum2 is %d rem is %d\n",sum2,rem);
            cnt++;
            if(sum2<=rem){
                
            }else if(sum2>rem){
                break;
            }

        }
        cout<<cnt<<endl;
}