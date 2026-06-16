  #include<stdio.h>
int main()
{
    int i,j,m,n;
    int a[100][100],b[100][100],sub[100][100];
    printf("enter the number of rows and column in matrix:");
    scanf("%d%d",&m,&n);
    printf("enter matrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
printf("enter matrix B:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
printf("the subtraction of matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sub[i][j]=a[i][j]-b[i][j];
printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}