#include<stdio.h>
int main(){
    int num,d,sum=0,place=1;
    printf("enter the number");
    scanf("%d",&num);
    while(num>0){
        d=num%2;
        sum=sum+d*place;
        place=place*10;
        num=num/2;
    }
    printf("the binary equivalent is: %d", sum);
}