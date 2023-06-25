#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter The String: ");
    scanf("%s", str);

    int len = strlen(str);
    int isPalindrome = 1; // Assume the string is a palindrome

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            isPalindrome = 0; // Set the flag to indicate it's not a palindrome
            break;
        }
    }

    if (isPalindrome)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
