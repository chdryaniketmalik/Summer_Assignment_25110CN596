#include<stdio.h>
int main()
{
    int a[50],i,n,sum=0;
    float averge;
    printf("Enter the numbers of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("The sum of the elements in the array is: %d",sum);
    averge=(float)sum/n;
    printf("\nThe average of the elements in the array is: %.2f",averge);    
    return 0;
}