#include <stdio.h>
int main()
{
    int i, j[10], s = 0;
    printf("Enter 10 Numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &j[i]);
        s += j[i];
    }
    printf("%d", s);
    return 0;
}