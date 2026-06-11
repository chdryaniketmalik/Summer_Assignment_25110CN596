#include<stdio.h>
int main()
{
    int a[100],i,j=0,n,temp;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]!=0){
        temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
        }
    printf("the array after moving zeroes to end is:");
    for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}
return 0;
}