#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number:");
    scanf("%d",&num);
    if(num<=0){
    return 1;
    }
        else{
        for(i=1;i<=num/2;i++){
            if(num%i==0){
                printf("%d\n",i);
            }
        }

    }
    return 0;
}