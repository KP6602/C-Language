#include <stdio.h>

int main()
{
    int n = 5;
    int d = 1;

    int mod_res = n % 7;
    int sub_res = d - mod_res;
    if (sub_res >= 0)
    {
        printf("%d", sub_res);
    }
    else
    {
        sub_res = 7 + sub_res;
        printf("%d", sub_res);
    }
    return 0;
}
