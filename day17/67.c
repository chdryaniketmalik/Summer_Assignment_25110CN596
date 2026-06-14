#include<stdio.h>
int main()
{
    int i,j,arr1[100],arr2[100],merged[200],n1,n2,n3;
    printf("enter the number of elements in array1:");
    scanf("%d",&n1);
    printf("enter the number of elements in array2:");
scanf("%d",&n2);
    printf("enter the elements of array1:");
   for(i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
   }
   printf("enter the elements of array:");
   for(j=0;j<n2;j++){
    scanf("%d",&arr2[j]);
   }
   printf("the intersection of two arrays is:");
   for(i=0;i<n1;i++){
    int found=0;
    for(j=0;j<n2;j++){
        if(arr1[i]==arr2[j]){
        printf("%d\t",arr2[i]);
    }
}
   }
   return 0;
}