#include<stdio.h>
int fact (int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int num,result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = fact(num);
    printf("Factorial of %d is %d", num, result);
    return 0;
}