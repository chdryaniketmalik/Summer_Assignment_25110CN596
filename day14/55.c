#include<stdio.h>
int main()
{
    int i,n,a[100],first,second;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    first=a[0];
    second=a[0];
    for(i=0;i<n;i++){
        if(a[i]>first){
            second=first;
            first=a[i];
        }
    }
    printf("the second largest element is: %d",second);
    return 0;
}