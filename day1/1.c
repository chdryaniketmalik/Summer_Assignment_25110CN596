#include<stdio.h>
int main(){
    int N,sum=0,i;
    printf("enter the number:");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
sum+=i;
    }
    printf("the sum of first %d natural numbers is %d",N,sum);
    return 0;
}