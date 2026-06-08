#include<stdio.h>
int isprime(int x){
    int i;
    if(x<=1){
        return 0;
    }
    for(i=2;i<=x/2;i++){
        if(x%i==0){
        
            return 0;
        }
}
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(isprime(num)){
        printf("\n%d is a prime number.",num);
    }
    else{
        printf("\n%d is not a prime number.",num);
    }
    return 0;
}