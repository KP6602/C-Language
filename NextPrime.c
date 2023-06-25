#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Invalid input. Enter a number greater than 1.\n");
        return 0;
    }

    n++;
    while (1)
    {
        int i;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
                break;
        }
        if (i == n)
        {
            printf("The next prime number is %d\n", n);
            return 0;
        }
        n++;
    }
}
