#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int arr[5];
    arr[0]= a+(b*c);
    arr[1]= a*(b+c);
    arr[2]= a*(b*c);
    arr[3]= (a+b)*c;
    arr[4]= (a+b)+c;
    int large=0;
    for(int i=0;i<5;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    cout<<large<<endl;
    
}