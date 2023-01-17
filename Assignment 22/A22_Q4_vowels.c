#include <stdio.h>
#include <string.h>
void vow(char *, int);
int main()
{
    char s[30];
    fgets(s, 30, stdin);
    int l = strlen(s);
    vow(s, l);
    return 0;
}
void vow(char *s, int n)
{
    int i, j = 0, k = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' ||
            s[i] == 'e' || s[i] == 'I' || s[i] == 'i' ||
            s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u')
        {
            j++;
        }
        if (s[i] >= 48 && s[i] <= 57)
        {
            k++;
        }
    }
    printf("Number of Vowels = %d\nNumber of Constant = %d", j, k);
}