#include <stdio.h>
#include <string.h>

int main()
{
    int n, m, A[10][10], transpose[10][10];

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("Enter the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }

    printf("Transpose Matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
