#include<stdio.h>
void fibonacci(int);
int main(){
    int num;
    printf("enter the no of terms:");
    scanf("%d",&num);
    fibonacci(num);
    return 0;
}
void fibonacci(int n){
    int t1=0,t2=1,nextterm,i;
    if(n<=0)
        printf("fibonacci series of non positive terms does not exist");
    else
    for(i=1;i<=n;i++){
        printf("%d",t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
        printf("\t");
    }

    
} 