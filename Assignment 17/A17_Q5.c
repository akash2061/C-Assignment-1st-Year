#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i >= i; i++)
    {
        printf("Enter number %d\n", i);
        scanf("%d", &j);
        if (j == 0)
        {
            break;
        }
        printf("You entered %d\n", j);
    }
    return 0;
}