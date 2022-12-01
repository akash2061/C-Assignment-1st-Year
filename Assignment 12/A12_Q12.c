#include <stdio.h>
int main()
{
    int i, a, n;
    printf("Enter a number to print its table:");
    scanf("%d", &i);
    for (a = 1; a <= i * 10; a++)
    {
        n = a % i;
        if (n == 0)
        {
            printf("%d\n", a);
        }
    }
    return 0;
}
