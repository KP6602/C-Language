#include <stdio.h>

int main()
{
    int n, i, a[100], sum;
    printf("Enter The Number Of Elements:");
    scanf("%d", &n);
    printf("Enter The Numbers:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = n * (n + 1) / 2;
    }
    printf("The Sum Of The Numbers Is:%d", sum);
    return 0;
}
