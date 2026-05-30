#include<stdio.h>
int main(){
   int i,n,flag=0;
   printf("enter the number:");
   scanf("%d",&n);
   if(n<=1){
    flag=1;
   } 
   else{
    for(i=2;i<=n/2;i++){
    if(n%i==0){
    flag=1;
        }
        
    }
   }
   if(flag==0)
    printf("entered number is a prime number");
   
   else
    printf("entered number is not a prime number");
    
   return 0;
}