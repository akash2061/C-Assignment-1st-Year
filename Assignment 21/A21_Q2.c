#include <stdio.h>
#include <string.h>
int main()
{
    char a[10], b[10];
    int i = 0;
    fgets(a, 10, stdin);
    fgets(b, 10, stdin);
    // i = strcmp(a, b);
    while (a[i] == b[i] && a[i] == '\0')
        i++;
    if (a[i] != b[i])
        printf("String are not equal");
    else
        printf("String are equal");
    return 0;
}