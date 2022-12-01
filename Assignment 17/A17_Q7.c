#include <stdio.h>
int main()
{
    int i, a[10], b = 0, j;
    for (i = 1; i < 11; i++)
    {
        printf("Enter %d number:\n", i);
        scanf("%d", &a[i]);
        if (a[i] == 10)
        {
            continue;
        }
    }
    printf("\n");
    for (i = 1; i < 11; i++)
    {
        if (a[i] != 10)
        {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}