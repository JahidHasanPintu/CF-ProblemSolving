#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count=0;
cin>>n;
while (n>0)
{
   int mod=n%10;
    if(mod==4||mod==7){
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

