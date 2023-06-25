#include <stdio.h>

int main()
{
    int n, count;
    printf("Enter The Number:");
    scanf("%d", &n);
    count = 0;
    while (n != 0)
    {
        n = n / 10;
        count = count + 1;
    }
    printf("%d", count);
    return 0;
}
