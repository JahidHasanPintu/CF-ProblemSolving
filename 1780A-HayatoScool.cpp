// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;cin>>t;
//     while(t--){
//         int n,cnt=0;
//         cin>>n;
//        vector<int>arr(n);
//         for(int j=0;j<n;j++){ 
//             cin>>arr[j];
//             }

//             for(int i=0;i<n-2;i++){
//                 for(int j=i+1;j<n-1;j++){
//                     for(int k=j+1;k<n;k++){
//                         if((arr[i]+arr[j]+arr[k])%2!=0){
//                             cout<<"YES"<<endl;
//                             cout<<i+1<<" "<<j+1<<" "<<k+1;
//                             cnt++;
//                             break;
//                         }
                        
//                     }
//                 }
//             }
//             if(cnt==0){
//                 cout<<"NO"<<endl;
//             }
             

//         }
        
//     }




// #include<bits/stdc++.h>
// using namespace std;
// long long t,a,b;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);cout.tie(0);
//     cin>>t;
//     while(t--)
//     {
//         cin>>a>>b;
//         if(a==b) {
//             cout<<0<<endl;
//             continue;
//         }
//         long long num=10;
//         long long num1=max(a,b)-min(a,b);
//         long long ans=0;
//         long long ss=num1/10;
//         ans+=ss;
//         if(num1%10) cout<<ans+1<<endl;
//         else cout<<ans<<endl;
//     }
//     return 0;
//  } 









#include<bits/stdc++.h>


using namespace std;
int a[100];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;++i){
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		bool flag=true;
		for(int i=1;i<n;++i){
			if(a[i]-a[i-1]>1){
				flag=false;
				printf("NO\n");
				break;
			}
		}
		if(flag){
			printf("YES\n");
		}
	}
	return 0;
}