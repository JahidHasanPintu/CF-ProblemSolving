#include<bits/stdc++.h>
using namespace std;
bool isComposite(int n)
{

    if (n <= 1)  return false;
    if (n <= 3)  return false;

    if (n%2 == 0 || n%3 == 0) return true;
  
    for (int i=5; i*i<n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return true;
  
    return false;
}
int main(){
    int n;cin>>n;
    for(int i=4;i<=n;i++){
        int temp=n-i;
        if(isComposite(i) and isComposite(temp)){
            cout<<i<<" "<<temp<<endl;
            break;
        }

    }
}