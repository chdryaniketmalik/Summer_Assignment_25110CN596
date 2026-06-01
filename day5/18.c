#include<stdio.h>
int main()
{
    int num,num1,fact,d,i,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    num1=num;
    while(num>0){
        d=num%10;
        fact=1;
        for(i=1;i<=d;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(sum==num1)
    {
        printf("number is strong");
    }
    else
    {
        printf("number is not strong");
    }
return 0;
}