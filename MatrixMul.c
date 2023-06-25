#include <stdio.h>
#include <string.h>

void Multiply(int a[][10], int b[][10], int ans[][10], int n, int m, int p, int q)
{
    if (m != p)
    {
        printf("Matrix multiplication not possible.\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int n, m, p, q, A[10][10], B[10][10], ANS[10][10];

    printf("Enter the number of rows and columns for Matrix 1: ");
    scanf("%d %d", &n, &m);

    printf("Enter the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the number of rows and columns for Matrix 2: ");
    scanf("%d %d", &p, &q);

    printf("Enter the matrix:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    Multiply(A, B, ANS, n, m, p, q);

    printf("Result:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", ANS[i][j]);
        }
        printf("\n");
    }

    return 0;
}
