#include<bits/stdc++.h>
using namespace std;
int findIndex(char find,int n,char str[]){
int i = 0;
int indexOfelemnt;
    while (i < n)
    {
        if (str[i] == find) {
            break;
        }
        i++;
    }
 
    if (i < n)
    {
        indexOfelemnt=i;
    }
    else {
        cout << "Element is not present in the given array";
    }
 
    return indexOfelemnt;
}
int main(){
    char str[7];
    int n = sizeof(str)/sizeof(str[0]);
    int t;
    cin>>t;
        for(int j=0;j<t;j++){
        cin>>str;
        char compareAr[]="rgbRGB";
        int result[n];
        int count=0;
        for(int i=0;i<n;i++){
            char find=compareAr[i];
            result[i]=findIndex(find,n,str);
            
        }
        if(result[0]<result[3] && result[1]<result[4] &&result[2]<result[5]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
 
   
 
    

}