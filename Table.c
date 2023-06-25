// Find The Table Of Number a till b.

#include <stdio.h>

int main()
{
    int a, b, ans;
    printf("Enter The Numbers:");
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= b; i++)
    {
        ans = a * i;
        printf("%d\n", ans);
    }
    return 0;
}
