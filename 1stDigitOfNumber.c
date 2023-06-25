#include <stdio.h>

int first_Digit(int n);

int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d", &n);
    int dig = first_Digit(n);
    printf("First Digit Is: %d", dig);
    return 0;
}

int first_Digit(int n)
{
    while (n >= 10)
    {
        n = n / 10;
    }
    return n;
}
