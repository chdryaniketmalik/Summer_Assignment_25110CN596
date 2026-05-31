#include<stdio.h>
#include<math.h>
int main()
{
    int num,num1,num2,sum=0,n=0,d=0;
    printf("enter the number");
    scanf("%d",&num);
    num1= num;
    while(num1>0){
        num1=num1/10;
        n++;

    }
    num2=num;
    while(num2>0){
         d=num2%10;
        sum=sum+pow(d,n);
        num2=num2/10;
    }
    if(sum==num){
        printf("the number is armstrong");
    }
    else{
        printf("the number is not armstrong");
    }
    return 0;
}