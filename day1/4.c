#include<stdio.h>
int main()
{
    int i=0;
    long long int n;
    printf("enter the number:");
    scanf("%lld",&n);
    while(n>0){
        n/=10;
        i++;
    }
    printf("the number of digits are:%d",i);
    return 0;
}