#include<stdio.h>
int main()
{
    int i,a[50],n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&a[i]);
    }
    printf("The elements in the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}