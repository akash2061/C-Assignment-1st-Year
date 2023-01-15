#include <stdio.h>
#include <string.h>
int main()
{
    int i, n = 0, count = 0;
    char l, a[30];
    puts("Enter a Sentence.");
    fgets(a, 30, stdin);
    count = strlen(a);
    printf("Enter a character to find it's frequency:\n");
    scanf("%c", &l);
    for (i = 0; i <= count; i++)
    {
        if (a[i] == l)
        {
            n++;
        }
    }
    printf("%d", n);
    return 0;
}