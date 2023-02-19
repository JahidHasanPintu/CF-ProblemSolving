#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t; cin>>t;
    long long b=1;
   while(t--){
        long long n,k;
        cin>>n>>k;
        long long arr[n]; long long sum =0, large=0;
        for(int i=0;i<n;i++){
            long long a; cin>>a;
            // arr[i]=0;
            sum+=a;
            if(large<a){
                large=a;
            }
        }
        long long ans=sum+(large*(k-1));
        printf("Case %lld: %lld\n",b,ans);
        b++;
    }

}
   