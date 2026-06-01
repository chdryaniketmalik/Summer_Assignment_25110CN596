#include<stdio.h>
int main()
{
    int n,isprime;
    printf("enter number:");
    scanf("%d",&n);
    int largestfactor=0;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            isprime=1;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    isprime=0;
                    break;
                }
            }
            if(isprime==1)
            {
                largestfactor=i;
            }
        }
    }
    printf("largest prime factor is:%d",largestfactor);
    return 0;
}