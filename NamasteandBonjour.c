#include <stdio.h>
void Namaste();
void Bonjour();

int main()
{
    printf("Enter F For French and I For Indian:");
    char ch;
    scanf("%c", &ch);

    if (ch == 'I')
    {
        Namaste();
    }
    else
    {
        Bonjour();
    }
    return 0;
}
void Namaste()
{
    printf("Namsate!\n");
}
void Bonjour()
{
    printf("Bonjour!\n");
}