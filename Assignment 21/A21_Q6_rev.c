#include <stdio.h>
#include <string.h>
int main()
// reverse the string.
{
    int i = 0, j, n = 0;
    char s[30], r[0];
    fgets(s, 30, stdin);
    while (s[i] != '\0')
    {
        n++;
        i++;
    }
    // printf("%d", n);
    for (i = 0; i <= n; i++)
    {
        for (j = i; j==i; j++)
        {
            r[j] = s[i];
        }
    }
    for (j = n; j >= 0; j--)
    {
        printf("%c", r[j]);
    }
    return 0;
}