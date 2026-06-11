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
    printf("number of times to right rotate an array: ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        temp=a[n-1];
        for(j=n-1;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    printf("the array after right rotaion is:");
    for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}
return 0;
}