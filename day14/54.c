#include<stdio.h>
int main()
{
int n,i,a[100],target,freq=0;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter the elements of array:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter the element to be searched:");
scanf("%d",&target);
for(i=0;i<n;i++){
    if(target==a[i]){
        freq++;
    }
}
if(freq>0){
    printf("%d is present %d times in array",target,freq);
}
else{
    printf("%d is not present in array",target);
}
return 0;       
}