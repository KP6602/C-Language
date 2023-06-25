#include <stdio.h>

int main()
{
    int marks;
    printf("Enter Marks Of Student");
    scanf("%d", &marks);
    if (marks > 30)
    {
        printf("Student Is Pass");
    }
    else
    {
        printf("Student Is Fail");
    }

    return 0;
}