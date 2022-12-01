#include <stdio.h>
// Calculate HCF of 2 given numbers.
void hcf(int, int);
int main()
{
    int a, b;
    printf("Enter 2 numbers to find HCF:  \n");
    scanf("%d%d", &a, &b);
    hcf(a, b);
    return 0;
}
void hcf(int a, int b)
{
    int c = 1;
    for (int i = 1; i <= a || i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            c = i;
        }
    }
    printf("%d", c);
}