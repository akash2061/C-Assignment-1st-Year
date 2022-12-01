#include <stdio.h>
int main()
{
    int i, a, n;
    printf("Enter a number:\n");
    scanf("%d", &i);
    for (a = 1; a <= i; a++)
    {
        printf("%d\n", n = a * a);
    }
    return 0;
}