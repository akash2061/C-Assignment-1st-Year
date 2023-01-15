#include <stdio.h>
#include <string.h>
int main()
{
    int i, j = 0, n, in = 0;
    char s[30];
    fgets(s, 30, stdin);
    n = strlen(s);
    do
        switch (s[n])
        {
        case '\n':
        case ' ':
            if (s[0] == '\n')
            {
                j = 0;
                break;
            }
            if (in)
            {
                in = 0;
                j++;
            }
            break;
        default:
            in = 1;
        }
    while (n--);
    printf("%d", j);
    return 0;
}