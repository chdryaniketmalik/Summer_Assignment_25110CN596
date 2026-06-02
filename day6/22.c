#include<stdio.h>
int main()
{
    int num,d,sum=0,place=1;
    printf("enter the number");
    scanf("%d",&num);
    while(num>0){
        d=num%10;
        sum=sum+d*place;
        place=place*2;
        num=num/10;
    }
    printf("the decimal equivalent is: %d", sum);

}