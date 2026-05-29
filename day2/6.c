#include<stdio.h>
int main()
{
    int n,d,reverse=0;
    printf("enter the number: ");
    scanf("%d",&n);
while(n>0){
    d=n%10;
    reverse=reverse*10+d;
    n/=10;
}
printf("the reverse of the number is: %d",reverse);
return 0;
}