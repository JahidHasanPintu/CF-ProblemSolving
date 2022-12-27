#include<stdio.h>
#include<string.h>

int main(){
    char str[105];
    int count=0;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='H' ||str[i]=='Q' || str[i]=='9'){
            count++;
            break;
        }
    }
    if(count==0){
         printf("NO\n");
    }else{
        printf("YES\n");
    }
}