#include <stdio.h>
int main()
{
    int i = 0, j[10], a = 0;
    printf("Enter 10 numbers to get average:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &j[i]);
        a += j[i];
    }
    a /= i;
    printf("Average = %d\n", a);
    return 0;
}