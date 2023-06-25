#include <stdio.h>

int main()
{
    int a, x, b, ans;
    printf("Enter the numbers:");
    scanf("%d %d", &a, &b);
    if (a >= b)
    {
        x = a;
    }
    else
    {
        x = b;
    }
    int range = a * b;
    ans = x;
    for (int i = x; i <= range; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            ans = i;
            break;
        }
    }
    printf("%d", ans);
    return 0;
}
