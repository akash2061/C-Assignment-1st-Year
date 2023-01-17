#include <stdio.h>
#include <string.h>
void rev(char *, int);
int main()
// reverse the string.
{
    int i = 0, j, n = 0;
    char s[30];
    fgets(s, 30, stdin);
    n = strlen(s);
    rev(s, n);
    return 0;
}
void rev(char *s, int n)
{
    int i, j;
    char r[n];
    for (i = 0; i <= n; i++)
    {
        for (j = i; j == i; j++)
        {
            r[j] = s[i];
        }
    }
    for (j = n; j >= 0; j--)
    {
        printf("%c", r[j]);
    }
}