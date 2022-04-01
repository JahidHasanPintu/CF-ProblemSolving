#include<bits/stdc++.h>
using namespace std;
int main(){
int count=0;
long long n;
cin>>n;
while (n>0)
{
   int mod=n%10;
   cout<<mod<<endl;
    if(mod==4||mod==7){
        // cout<<mod<<endl;
        count++;
    }
   n=n/10;
}
if(count==4||count==7){
    cout <<"YES"<<endl;
}else{
    cout <<"NO"<<endl;
}

}

