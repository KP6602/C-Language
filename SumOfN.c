#include <stdio.h>
int Sum(int n);

int main()
{
    printf("Sum is:%d\n", Sum(6));
    return 0;
}

int Sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int SumN1 = Sum(n - 1);
    int SumN = SumN1 + n;
    return SumN;
}