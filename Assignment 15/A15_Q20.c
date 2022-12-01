#include <stdio.h>
int main()
{
    int i, p, s = 0;
    printf("Enter the number to get its Factorial:");
    scanf("%d", &i);
    int n, f = 1;
    for (n = 1; n <= i; n++)
    {
        f *= n;
        p = f / n;
        s += p;
    }
    printf("%d", s);
    return 0;
}