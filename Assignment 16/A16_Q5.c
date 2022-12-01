#include <stdio.h>
// Sum of cubes of N natural numbers.
int c(int);
int main()
{
    int i, n, s;
    printf("Enter a range: ");
    scanf("%d", &n);
    s = c(n);
    printf("%d", s);
    return 0;
}
int c(int n)
{
    int i, s = 0;
    for (i = 1; i <= n; i++)
    {
        s += (i * i * i);
    }
    return s;
}