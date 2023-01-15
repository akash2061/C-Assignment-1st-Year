#include <stdio.h>
int string(char *);
int main()
{
    char a[20];
    int i;
    fgets(a, 20, stdin);
    i = string(a);
    printf("String Size = %d", i);
    return 0;
}
int string(char *a)
{
    int count = 0, i = 0, n = 0;
    while (a[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}