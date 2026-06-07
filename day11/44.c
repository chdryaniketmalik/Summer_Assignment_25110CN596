#include<stdio.h>
int fact(int);
int main()
    {
        int n,result;
printf("enter the number:");
scanf("%d",&n);
result=fact(n);
printf("the factorial of number is %d",result);
return 0;
}
int fact(int a){
    int factorial=1;
    for(int i=1;i<=a;i++){
        factorial=factorial*i;
    }
    return factorial;
}
