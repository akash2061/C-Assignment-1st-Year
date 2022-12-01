#include <stdio.h>
// Calculate LCM of 2 given numbers.
int lcm(int, int);
int main()
{
    int a, b, l;
    printf("Enter 2 positive integer:  \n");
    scanf("%d%d", &a, &b);
    l = lcm(a, b);
    printf("%d", l);
    return 0;
}
int lcm(int a, int b)
{
    int c, l;
    for (int i = 1; i <= a && i <= b; ++i)
    {
        if (a % i == 0 && b % i == 0)
        {
            c = i;
        }
    }
    l = (a * b) / c;
    return l;
}