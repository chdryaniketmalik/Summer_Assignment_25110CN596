#include<stdio.h>
int main() 
{
 int i,j,k,n1,n2,arr1[50],arr2[50],new[100];
 printf("enter the numberof elements in array 1:\n");
 scanf("%d",&n1);
 printf("enter the number of elements in array 2:\n");
 scanf("%d",&n2);
 printf("enter array 1:\n");
 for(i=0;i<n1;i++){
scanf("%d",&arr1[i]);
 }
printf("enter array 2:\n");
 for(i=0;i<n2;i++){
scanf("%d",&arr2[i]);
 }
  i=0,j=0,k=0;
 while(i<n1&&j<n2){
    if(arr1[i]<arr2[j]){
        new[k]=arr1[i];
        i++;
    }
    else
    {
new[k]=arr2[j];
j++;
    }
    k++;
}
    while(i<n1){
        new[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        new[k]=arr2[j];
        j++;
        k++;
    }
    printf("merged array is:\n");
    for(i=0;i<k;i++){
printf("%d\n",new[i]);
}  
 return 0; 
}   

    