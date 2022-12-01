#include <stdio.h>
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
    int i, m, a = 2;
    printf("Enter a Range to print Prime number: ");
    scanf("%d", &i);
    for (m = 0; a <= i; a++)
    {
        if (p(a))
        {
            printf("%d\n", a);
        }
    }
    return 0;
}