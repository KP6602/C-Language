#include <stdio.h>
#include <math.h>

int isPrime(int num);
int Prime_factor(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    Prime_factor(n);
    return 0;
}

int isPrime(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int Prime_factor(int n)
{
    int i;
    for (i = 2; i <= n; i++)
    {
        if (isPrime(i) == 1)
        {
            int x = i;
            while (n % x == 0)
            {
                printf("%d ", i);
                x *= i;
            }
        }
    }
    return 0;
}
