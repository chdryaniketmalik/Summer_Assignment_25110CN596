#include<stdio.h>
int sod(int n){
    if(n==0) return 0;
    return (n%10)+sod(n/10);
}
int main(){
    int num,result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = sod(num);
    printf("Sum of digits of %d is %d", num, result);
    return 0;
}