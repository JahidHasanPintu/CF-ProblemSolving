#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;cin>>n;
    int check=0,isCap=0;
    if(n[0]>96){
        for(int i=1;i<n.size();i++){
            if(n[i]>96){
                check++;
                break;
            }
        }
        // check=1;
    }else if(n[0]<91){
        for(int i=0;i<n.size();i++){
            if(n[i]>96){
                check++;
                isCap=10;
                break;
            }else{
                isCap=20;
            }
        }
    }else{

    }

    if(check!=0){
        cout<<n<<endl;
    }else if(isCap==20){
        string s2=n;
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        cout<<s2<<endl;
    }else{
        string s2=n;
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        s2[0]-=32;
        cout<<s2<<endl;
    }
    

   
    
    
}