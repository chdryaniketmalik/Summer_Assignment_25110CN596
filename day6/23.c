#include<stdio.h>
int main()
{
    int count=0;
    unsigned int num;
    printf("enter the number");
    scanf("%u",&num);
    while(num)
    {
        num&=(num-1);
        count++;
    }    
    printf("set of bits in number is %d",count);
    return 0;
}