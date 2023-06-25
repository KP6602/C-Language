#include <stdio.h>

int main()
{
    int a, x, b;
    printf("Enter the numbers:");
    scanf("%d %d", &a, &b);
    if (a >= b)
    {
        x = b;
    }
    else
    {
        x = a;
    }
    int ans = 1;

    for (int i = 1; i <= x; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }
    printf("%d", ans);
    return 0;
}
