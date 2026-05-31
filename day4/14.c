#include <stdio.h>
int main() {
    int n,i,term1=0,term2=1,next_term;
    printf("enter the no of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
       if(i==1){
       printf("%d\n",term1);
        }
       else if(i==2){
            printf("%d\n",term2);
        }
        else{
            next_term=term1+term2;
            printf("the %d term of series is %d",i,next_term);
            term1=term2;
            term2=next_term;
        }

    }
  
    return 0;
}