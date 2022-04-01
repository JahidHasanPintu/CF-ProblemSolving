/*****************************
 *Program : split the digits *
 *Language : C               *
 *****************************/
 
#include<stdio.h>

int main()
{
    long long num;
    
    printf("Enter a number\n");
    scanf("%lld",&num);
    
    while(num > 0) //do till num greater than  0
    {
        int mod = num % 10;  //split last digit from number
        printf("%d\n",mod); //print the digit. 
    
        num = num / 10;    //divide num by 10. num /= 10 also a valid one 
    }
    
    return 0;
}