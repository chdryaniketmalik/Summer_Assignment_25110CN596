#include<stdio.h>
int main()
{
 int num,i,sum=0;
 printf("enter the number:");
 scanf("%d",&num);
 if(num<=0){
    printf("number is not prfect");
 }
 else
 {
 for(i=1;i<=num/2;i++)
 {
if(num%i==0){
    sum=sum+i;
}
    
 }   
}
if(sum==num){
    printf("number is perfect");

}
else
{
    printf("number is not perfect");
}
return 0;
}