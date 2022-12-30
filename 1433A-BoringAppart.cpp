
#include <bits/stdc++.h>
using namespace std;

int countDigit(long long n) {
return floor(log10(n) + 1);
}


int main(void)
{   
    int t; cin>>t;
    while(t--){
        int a,count=0; cin>>a;
        int curNum= a%10;
        count += (curNum-1)*10;
        int numberofDigit= countDigit(a);
        if(numberofDigit==4){
            count+= 10;
        }else if(numberofDigit==3){
            count+= 6;
        }else if(numberofDigit==2){
            count+= 3;
        }else{
            
            count+= 1;
        
        }
        cout<<count<<endl;
    }
	
}


