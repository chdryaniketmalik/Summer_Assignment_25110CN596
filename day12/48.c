#include<stdio.h>
int isperfect(int x){
    int i,sum=0;
    for(i=1;i<x;i++){
        if(x%i==0){
            sum=sum+i;
        }
    }
    if(sum==x){
        printf("\n%d is a perfect number.",x);
    }
    else{
        printf("\n%d is not a perfect number.",x);
    }
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    isperfect(num);
    return 0;
}