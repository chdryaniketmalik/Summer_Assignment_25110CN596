#include<stdio.h>
int main()
{
    int i,j,n;
    int a[100][100],lsum=0,rsum=0,sum;
    printf("enter the order of matrix:");
    scanf("%d",&n);
    printf("enter matrix A:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
            for(i=0;i<n;i++){
                lsum+=a[i][i];
                rsum+=a[i][n-i-1];
            }
        sum=lsum+rsum;
        printf("the sum of diagonal elements is %d",sum);
        return 0;
    }