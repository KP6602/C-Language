#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    printf("Enter a Choice: \n");
    char c;
    scanf("%c", &c);
    switch (c)
    {
    case 'w':
        y++;
        break;
    case 'a':
        x--;
        break;
    case 's':
        y--;
        break;
    case 'd':
        x++;
        break;
    default:
        printf("Invalid Choice\n");
        break;
    }
    printf("Your position is (%d, %d)\n", x, y);
    return 0;
}