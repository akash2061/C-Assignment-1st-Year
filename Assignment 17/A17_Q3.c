#include <stdio.h>
int main()
{
    int t = 10, i, j;
    printf("Enter any 10 natural number: \n");
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &j);
        if (j == 10)
        {
            break;
        }
        printf("You entered %d\n", j);
    }
    return 0;
}