#include <stdio.h>
// Even==1
// Odd==0
int main()
{
    int a;
    printf("Enter The Number:");
    scanf("%d", &a);
    printf("%d", a % 2 == 0);
    return 0;
}