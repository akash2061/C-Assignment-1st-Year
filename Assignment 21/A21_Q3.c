#include <stdio.h>
#include <string.h>
int main()
{
    int i, n = 0;
    char s[30];
    fgets(s, 30, stdin);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' ||
            s[i] == 'e' || s[i] == 'I' || s[i] == 'i' ||
            s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u')
        {
            n++;
        }
    }
    printf("Vowels in String = %d\n", n);
    return 0;
}