#include <stdio.h>
int main()
{
    int a, s = 0;
    for (int i = 1; i < 11; i++)
    {
        printf("Enter %d number:\n", i);
        scanf("%d", &a);
        if (a < 0)
        {
            continue;
        }
        s += a;
    }
    printf("%d", s);
    return 0;
}