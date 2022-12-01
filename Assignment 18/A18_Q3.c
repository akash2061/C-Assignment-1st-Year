#include <stdio.h>
int main()
{
    int e = 0, o = 0, i, j[10];
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &j[i]);
        if (j[i] % 2 == 0)
        {
            e += j[i];
        }
        else if (j[i] != 0)
        {
            o += j[i];
        }
    }
    printf("Sum of Even Numbers = %d\n", e);
    printf("Sum of Odd Numbers = %d\n", o);
    return 0;
}