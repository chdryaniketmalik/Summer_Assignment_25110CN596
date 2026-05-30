#include<stdio.h>
int main()
{
    int i,j,f,l;
    printf("enter the first number of range:");
    scanf("%d",&f);
    printf("enter the last number of range:");
    scanf("%d",&l);
    for(i=f;i<=l;i++){
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                printf("%d is not a prime number\n",i);
                break;
            }
            else{
                printf("%d is a prime number\n",i);
                break;
            }
        }
    }
    return 0;
}