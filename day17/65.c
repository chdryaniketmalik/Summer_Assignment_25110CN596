#include<stdio.h>
int main()
{
    int i,j,arr1[100],arr2[100],merged[200],n1,n2,n3;
    printf("enter the number of elements in array1:");
    scanf("%d",&n1);
    printf("enter the number of elements merged:");
scanf("%d",&n2);
    printf("the elements are:");
   for(i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
   }
   printf("enter the elements to merge:");
   for(j=0;j<n2;j++){
    scanf("%d",&arr2[j]);
   }
   for(i=0;i<n1;i++){
    merged[i]=arr1[i];
   }
   for(j=0;j<n2;j++){
    merged[n1+j]=arr2[j];
   }
   n3=n1+n2;
   for(i=0;i<n3;i++){
    printf("%d\t",merged[i]);
   }
   return 0;
}