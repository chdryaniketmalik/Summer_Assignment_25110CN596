#include<stdio.h>
int main()
{
    int n,i,term1=0,term2=1,next_term;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("fibonacci series:%d\n%d\n",term1,term2);
    next_term=term1+term2;
    for(i=3;i<=n;i++){
    printf("%d\n",next_term);
    term1=term2;
    term2=next_term;
    next_term=term1+term2;
    
    }
return 0;
}