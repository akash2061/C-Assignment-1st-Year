#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, c = 0, k = 0, x = 0;
    char s[30];
    fgets(s, 30, stdin);
    n = strlen(s);
    for (i = 0; i < n; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= 'A' && s[i] <= 'Z'))
        {
            c++;
        }
        if (s[i] >= 48 && s[i] <= 57)
        {
            k++;
        }
        if ((s[i] > 0 && s[i] <= 255 && s[i] != 32))
        {
            x++;
        }
    }
    x = x - c - k - 1;
    printf("Number of Alphabets = %d.\nNumber of Numbers = %d.\nNumber of Special characters = %d.", c, k, x);
    return 0;
}