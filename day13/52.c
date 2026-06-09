#include<stdio.h>
int main()
{
    int a[20],i,n,ceven,codd;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ceven=0;
    codd=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            ceven++;
        }
        else
        {
            codd++;
        }
    }
    printf("Number of even elements: %d\n", ceven);
    printf("Number of odd elements: %d\n", codd);
    return 0;
}