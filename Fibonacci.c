#include <stdio.h>

int main()
{
    int n, a = 1, b = 1, c = 0;
    printf("Enter The Number:");
    scanf("%d", &n);
    printf("1 1 ");
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}
