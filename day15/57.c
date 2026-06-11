#include<stdio.h>
int main()
{
    int i,temp,n,a[100];
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
       temp=a[i];
       a[i]=a[n-i-1];
       a[n-i-1]=temp; 
    }
        
    printf("reversed array:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
}
    return 0;
}