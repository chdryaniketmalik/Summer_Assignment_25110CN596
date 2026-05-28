#include<stdio.h>
int main(){
    int i,n;
   unsigned long long factorial=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("the factorial of number is:%llu",factorial);
    return 0;
}