#include<stdio.h>
int armstrong(int x){
    int res=0,d;
    int temp=x;
    while(x!=0){
        d=x%10;
        res=res+d*d*d;
        x=x/10;
        }
    if(res==temp){
        printf("\n%d is an armstrong number.",temp);
    }
    else{
        printf("\n%d is not an armstrong number.",temp);
    }
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    armstrong(num);
    return 0;
}