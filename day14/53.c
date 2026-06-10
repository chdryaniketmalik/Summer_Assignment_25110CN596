#include<stdio.h>
int main()
{
    int i,n,a[500],target,flag=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    printf("enter the element to be searched:");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(target==a[i]){
        flag=1;
        break;
        }
    }
    if(flag==1){
        printf("%d is present at %d position",target,i+1);
    }
    else{
printf("%d is not present in array",target);
    }
return 0;
}