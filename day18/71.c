#include<stdio.h>
int main()
{
    int i,target,n,a[50],low,high,mid,found=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("the elements of array are:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to search:");
    scanf("%d",&target);
    low=0;high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==target){
            found=1;
            break;
        }
        else if(a[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found){
        printf("%d is present at %d position in array",target,mid+1);
    }
    else{
        printf("%d is not present in array",target);
    }
    
    return 0;
}