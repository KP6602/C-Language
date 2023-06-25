#include <stdio.h>
#include <string.h>

int main()
{
    int n, i = 0;
    char ans[100];
    printf("Enter The Decimal Number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        int rem = n % 2;
        char num = rem + 48;
        ans[i] = num;
        i++;
        n = n / 2;
    }

    strrev(ans); // Reversing the string

    printf("The Binary Number is: %s", ans);
    return 0;
}