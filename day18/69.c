#include<stdio.h>
int main()
{
    int i,j,n,temp,arr[50];
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("the elements of array are:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the sorted array is:");
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
return 0;
}