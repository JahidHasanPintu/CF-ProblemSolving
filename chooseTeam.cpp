#include<bits/stdc++.h>


using namespace std;

int main(){
	int n,m;
    cin>>n>>m;
    int ans=0,temp=5-m;
    for(int i=0;i<n;i++){
        int temp2;
        cin>>temp2;
        if(temp2<=temp){
            ans++;
        }
    }
    cout<<ans/3<<endl;

}