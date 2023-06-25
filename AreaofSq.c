// Write A Program To Find Area Of Square

#include <stdio.h>

int main()
{
    int side, area;
    printf("Enter The Side Of Square: ");
    scanf("%d", &side);
    area = side * side;
    printf("Area Of Square Is: %d", area);
    return 0;
}