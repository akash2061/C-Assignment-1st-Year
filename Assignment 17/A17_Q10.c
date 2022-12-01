#include <stdio.h>
int main()
{
    int i, j = 0, a;
    for (i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        j += i;
    }
    printf("%d", j);
    return 0;
}