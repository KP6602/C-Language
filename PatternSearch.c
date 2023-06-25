#include <stdio.h>
#include <string.h>

void Search(char *p, char *s)
{
    int M = strlen(p);
    int N = strlen(s);
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        int a = i;
        for (j = 0; j < M; j++)
        {
            if (s[a] != p[j])
                break;
            a++;
        }
        if (j == M)
            printf("Pattern found at index %d \n", i);
    }
}

int main()
{
    printf("Enter The String 1:");
    char s[100];
    scanf("%s", s);
    printf("Enter The String 2:");
    char p[100];
    scanf("%s", p);

    Search(p, s); // Call the Search function with the input strings

    return 0;
}
