#include <stdio.h>

void PrintHello(int count);
int main()
{
    PrintHello(10);
    return 0;
}

void PrintHello(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello World\n");
    PrintHello(count - 1);
}