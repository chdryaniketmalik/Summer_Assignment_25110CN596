#include<stdio.h>
int pallindrome(int x){
    int res=0,d;
    int temp=x;
    while(x!=0){
        d=x%10;
        res=res*10+d;
        x=x/10;
        }
    if(res==temp){
        printf("\n%d is a palindrome number.",temp);
    }
    else{
        printf("\n%d is not a palindrome number.",temp);
    }
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    pallindrome(num);
    return 0;
}