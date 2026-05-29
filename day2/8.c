#include<stdio.h>
int main()
{
    int num,d,num1,reverse=0;
    printf("enter the number:");
    scanf("%d",&num);
    num1=num;
    while(num>0){
        d=num%10;
        reverse=reverse*10+d;
        num/=10;
    }
    if(num1==reverse){
        printf("the number is pallindrome"); 
    }
    else{
        printf("the number is not pallindrome");
    }
    return 0;
}