#include <stdio.h>
int main()
{
    int i, j, a[10], s;
    printf("Enter 10 Numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    s = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] > s)
        {
            s = a[i];
        }
    }
    printf("%d", s);
    return 0;
}