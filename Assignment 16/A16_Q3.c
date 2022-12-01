#include <stdio.h>
// sum of 1st n odd numbers.
int even(int);
int main()
{
    int a, c;
    printf("Enter the range: ");
    scanf("%d", &a);
    c = even(a);
    printf("%d", c);
    return 0;
}
int even(int a)
{
    int s = 0;
    for (int i = 0; i <= a; i++)
    {
        if (i % 2 != 0)
        {
            s += i;
        }
    }
    return s;
}