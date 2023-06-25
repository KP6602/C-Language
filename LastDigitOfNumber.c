#include <stdio.h>

int main()
{
    int n, result;
    printf("Enter The Number: ");
    scanf("%d", &n);

    result = n % 10;
    printf("The Last Digit is: %d", result);
}