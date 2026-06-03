#include<stdio.h>
int reverse(int n){
    int rev=0;
    while(n>0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    return rev;
}
int main(){
    int num,result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = reverse(num);
    printf("Reverse of %d is %d", num, result);
    return 0;
}