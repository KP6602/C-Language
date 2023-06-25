#include <stdio.h>

int main()
{
    int a, b, c, Result;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter The Operation To Be Performed: ");
    scanf("%d", &c);
    if (c == 1)
    {
        Result = a + b;
        printf("The Sum Of %d And %d Is %d", a, b, Result);
    }
    else if (c == 2)
    {
        Result = a - b;
        printf("The Difference Of %d And %d Is %d", a, b, Result);
    }
    else if (c == 3)
    {
        Result = a * b;
        printf("The Product Of %d And %d Is %d", a, b, Result);
    }
    else
    {
        printf("Invalid Operation");
    }
    return 0;
}