#include <stdio.h>
int main()
{
    int a, b, c = 1;
    printf("Enter 2 numbers to find HCF:  \n");
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= a || i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            c = i;
        }
    }
    printf("%d", c);
    return 0;
}