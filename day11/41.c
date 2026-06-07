#include<stdio.h>
int sum(int,int);
int main()
{
    int num1,num2,result;
    printf("enter the numbers:");
   scanf("%d%d",&num1,&num2);
    result=sum(num1,num2);
    printf("the sum of numbers is %d",result);
    return 0;
}
int sum(int a,int b )
{
    int add;
    add=a+b;
    return add;
}