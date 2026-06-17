#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], prod[10][10];
    int m, n, p, q;
    int i, j, k;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d%d", &m, &n);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d%d", &p, &q);

    if (n != p)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter Matrix A:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Matrix B:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            prod[i][j] = 0;

            for (k = 0; k < n; k++)
            {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product Matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}