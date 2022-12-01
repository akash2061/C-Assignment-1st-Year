#include <stdio.h>
// to print first n term of Fibonacci series.
void fib(int);
int main()
{
    int a;
    printf("Enter a range: ");
    scanf("%d", &a);
    fib(a);
    return 0;
}
void fib(int a)
{
    int n, f = 0, s = 1;
    for (int i = 0; i < a; i++)
    {
        if (i <= 1)
        {
            n = i;
        }
        else
        {
            n = f + s;
            f = s;
            s = n;
        }
        printf("%d\n", n);
    }
}