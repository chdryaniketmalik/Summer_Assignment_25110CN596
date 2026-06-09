#include<stdio.h>
int main()
{
    int a[20],i,n,smallest,largest;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest=a[0];
    largest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    printf("The smallest element in the array is: %d", smallest);
    printf("\nThe largest element in the array is: %d", largest);
    return 0;
}