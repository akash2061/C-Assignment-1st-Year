#include <stdio.h>
#include <string.h>
int calStringLength(char *, int);
int main()
{
    char s[30];
    fgets(s, 30, stdin);
    int arraysize = sizeof(s);
    int l = calStringLength(s, arraysize);
    printf("%d", l);
    return 0;
}
int calStringLength(char *ptr, int arraysize)
{
    arraysize = strlen(ptr);
    return arraysize;
}