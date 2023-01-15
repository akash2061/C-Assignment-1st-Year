#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char a[10], b[0];
    fgets(a, 10, stdin);
    strcpy(b, a);
    puts(b);
    return 0;
}