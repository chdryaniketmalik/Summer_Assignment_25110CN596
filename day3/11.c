#include<stdio.h>
int gcd(int,int);
int main()
{
    int num1,num2,result;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    result=gcd(num1,num2);
    printf("the gcd of two number is %d",result);
    return 0;
}
int gcd(int num1,int num2){
    int temp;
while(num2!=0){
    temp=num1%num2;
    num1=num2;
    num2=temp;
}
    return num1;
}
