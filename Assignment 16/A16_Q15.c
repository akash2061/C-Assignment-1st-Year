#include <stdio.h>
// Print all Prime number in between 0 to 100.
int p(int m)
{
    for (int a = 2; a * a <= m; a++)
    {
        if (m % a == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int i = 100, m, a = 2;
    printf("Prime number from 0 to 100: \n");
    for (m = 0; a <= i; a++)
    {
        if (p(a))
        {
            printf("%d\n", a);
        }
    }
    return 0;
}