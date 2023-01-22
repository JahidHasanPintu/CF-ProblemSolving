#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int temp=1;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i%2==0){
                cout<<"#";
            }else{
                if(temp==1 && j==b-1){
                    cout<<"#";
                    temp=2;
                }else if(temp==2 && j==0){
                    cout<<"#";
                    temp=3;
                }else{
                    cout<<".";
                }
                
            }
        }
        if(temp==3){
            temp=1;
        }
        cout<<endl;
    }
}