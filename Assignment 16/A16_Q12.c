#include <stdio.h>
// Number is present in fibonacci series or not.
int main()
{
    int a, b, c, next, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    if ((n == 0) || (n == 1))
        printf("\n%d is present Fibonacci Series.", n);
    else
    {
        a = 0;
        b = 1;
        c = a + b;
        while (c < n)
        {
            a = b;
            b = c;
            c = a + b;
        }
        if (c == n)
        {
            printf("\n%d is present Fibonacci Series.", n);
        }
        else
        {
            printf("\n%d is not present Fibonacci Series.", n);
        }
    }
    return 0;
}