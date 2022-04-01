#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int a,b,ans;
   
        scanf("%d %d",&a,&b);
        if(a==0){
        ans=1;        
        }else if(b==0){
        ans=a+1;
        }else{
        ans=a+(b*2)+1;
        }
     printf("%d\n",ans);
    }
    
    
   
    return 0;
}