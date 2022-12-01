#include <stdio.h>
// Sum of N natural numbers.
int main()
{
    int i, n, s;
    printf("Enter a range: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s += i;
    }
    printf("%d", s);
    return 0;
}
