#include<stdio.h>
int main()
{
    int i,j,n,temp,a[50];
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("the elements of array are:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the sorted array is:");
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
       