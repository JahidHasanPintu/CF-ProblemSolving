// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t; cin>>t;
//     while(t--){
//         int n; cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
            
//         }
//         int sum=arr[0];
//         for(int i=1;i<n;i++){
//             if(sum==arr[i]){
//                 swap(arr[i],arr[i-1]);
//             }
//             sum=sum+arr[i];
            
//         }
//         int count=0;
//         int sum2=arr[0];
//         for(int i=1;i<n;i++){
//             // cout<<"comparing "<<sum2<<" and "<<arr[i];
//             if(sum2==arr[i]){
//                 count++;
//                 // cout<<"got it";
//                 break;
//             }
//             sum2=sum2+arr[i];
            
//         }
//         if(count>0){
//             cout<<"NO"<<endl;
//         }else{
//             cout<<"YES"<<endl;
//             for(int i=0;i<n;i++){
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
            
//         }


//     }
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int arr[n];
      map<int,int>m;
      for(int i=0;i<n;i++){
          cin>>arr[i];
          m[arr[i]]++;
      }
      sort(arr,arr+n);
      if(m.size()==1 && n!=1){
          cout<<"NO"<<endl;
      }
      else{
         cout<<"YES"<<endl; 
      if(n==1){
          cout<<arr[0]<<" ";
      }
      
      
 else if(n%2==0){
      int k=0;
      int f=n-1;
      for(int i=0;i<n/2;i++){
          cout<<arr[k]<<" "<<arr[f]<<" ";
          k++;
          f--;
          
      }
  } 
  else{
      int k=0;
      int f=n-1;
      for(int i=0;i<n/2;i++){
          cout<<arr[k]<<" "<<arr[f]<<" ";
          k++;
          f--;
      }
      cout<<arr[n/2]<<" ";
  }}
  
  cout<<endl;
  }
  return 0;
}