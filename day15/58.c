#include<stdio.h>
int main()
{
    int a[100],i,j,n,num,temp;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("number of times to left rotate an array: ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        temp=a[0];
        for(j=0;j<n-1;j++){
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
    printf("the array after left rotaion is:");
    for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}
return 0;
}