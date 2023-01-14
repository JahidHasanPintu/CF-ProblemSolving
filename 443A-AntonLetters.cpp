#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    // cin>>str;
    getline(cin,str);
    // cout<<str;
    sort(str.begin(),str.end());
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]!=str[i+1]){
            count++;
        }
         
    }
    // for(int i=0;i<str.size();i+2){
        
    //         str.erase(str.begin() + i+1);
    //         // str.erase(str.begin() + i-1);
        
         
    // }
    if(count<3){
        cout<<0<<endl;
    }else if(count==3){
        cout<<1<<endl;
    }else
    {
        cout<<count-4<<endl;
    }
    
    // cout<<str;
}