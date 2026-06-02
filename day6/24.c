#include<stdio.h>
int main()
    {
        int x,n;
        printf("enter the base and power");
        scanf("%d%d",&x,&n);
        int num=1;
        for(int i=1;i<=n;i++)
        {
            num=num*x;
        
        }
        printf("the result is %d",num);
        return 0;
    }
