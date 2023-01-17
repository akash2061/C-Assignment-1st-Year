#include <stdio.h>
int rev(int *);
int main()
{
    int i, a[10];
    int p[10];
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements After Reverse:\n");
    for (i = 0; i < 10; i++)
    {
        p[i] = rev(a);
        printf("%d\n", p[i]);
    }
    return 0;
}
int rev(int *a)
{
    int b[10];
    static int j = -1, i = 10;
    for (i--; i >= 0;)
    {
        for (j++; j < 10;)
        {
            b[j] = a[i];
            return b[j];
        }
    }
}