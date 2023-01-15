#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, n;
    char s[30];
    fgets(s, 30, stdin);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
    }
    printf("%s", s);
    return 0;
}