#include <stdio.h>

int main()
{
    int n;
    printf("Enter The Number:");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("%d Is Not A Prime Number.", n);
        return 0;
    }
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            printf("%d Is Not A Prime Number.", n);
            return 0;
        }
    }
    printf("%d Is A Prime Number.", n);
    return 0;
}