#include<stdio.h>
int main()
{
    int i,j,m,n;
    int a[100][100],trans[100][100];
    printf("enter the number of rows and column in matrix:");
    scanf("%d%d",&m,&n);
    printf("enter matrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    trans[j][i]=a[i][j];
            }
        }
    printf("the transpose of matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}