#include<stdio.h>
#include<math.h>
int main()
{
int i,first,last,num1,num2,sum,n,d;
printf("enter the first number of range:");
scanf("%d",&first);
printf("enter the last number of range:");
scanf("%d",&last);
for(i=first;i<=last;i++)
{
num1=i;
n=0;
while(num1>0)
    {
    num1/=10;
    n++;
    }
    num2=i;
    sum=0;
while(num2>0){
d=num2%10;
sum+=(int)pow(d,n);
num2/=10;
}
if(sum==i){
printf("%d is armstrong",i);
}
}
return 0;
}