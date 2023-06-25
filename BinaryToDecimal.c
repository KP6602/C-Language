#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter The Binary Number: ");
    scanf("%s", str);

    int base = 1;
    int result = 0;
    int last_index = strlen(str) - 1; // last index of the string (left to right)

    for (int i = last_index; i >= 0; i--)
    {
        int convert_num = str[i] - 48; // convert char to int
        result = result + (convert_num * base);
        base = base * 2;
    }

    printf("The Decimal Number is: %d", result);
    return 0;
}