#include <stdio.h>
int sum(int *);
int main()
{
    int i, a[10], r;
    printf("Enter 10 Numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    r = sum(a);
    printf("Sum = %d", r);
    return 0;
}
int sum(int *a)
{
    int i, z = 0;
    for (i = 0; i < 10; i++)
    {
        z += a[i];
    }
    return z;
}